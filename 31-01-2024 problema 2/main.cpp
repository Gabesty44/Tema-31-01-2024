#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,v[100][100],suma[100],min[100],max[100],M[100],aux;
    float mediaAritmetica[100];
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>v[i][j];
    for(i=0;i<n;i++)
    {
        M[i]=m;
        max[i]=0;
        min[i]=10000001;
        for(j=0;j<m;j++)
        {
            if(v[i][j]<min[i])
                min[i]=v[i][j];
            if(v[i][j]>max[i])
                max[i]=v[i][j];
            suma[i]+=v[i][j];
        }
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(v[i][j]==min[i])
            {
                suma[i]-=v[i][j];
                M[i]--;
            }
            if(v[i][j]==max[i])
            {
                suma[i]-=v[i][j];
                M[i]--;
            }
        }
    for(i=0;i<n;i++)
        mediaAritmetica[i]=(float)suma[i]/M[i];
    for(i=0;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(mediaAritmetica[i]<mediaAritmetica[j])
            {
                aux=mediaAritmetica[i];
                mediaAritmetica[i]=mediaAritmetica[j];
                mediaAritmetica[j]=aux;
            }
    for(i=0;i<n;i++)
        cout<<mediaAritmetica[i]<<" ";
    return 0;
}
