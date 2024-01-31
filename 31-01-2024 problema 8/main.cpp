#include <iostream>

using namespace std;

int main()
{
    int j,i,n,m,a,b,v[100],v1[100],suma=0;
    cin>>n>>m>>a>>b;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=m;i++)
        cin>>v1[i];
    for(i=1;i<=n;i++)
        if(v1[i]==i)
            v1[i]=1;
        else
            v1[i]=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    }
    for(i=1;i<=n;i++)
        if(v1[i]==1)
            suma+=v[i];
    cout<<suma;
    return 0;
}
