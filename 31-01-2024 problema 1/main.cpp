#include <iostream>

using namespace std;

int main()
{
    int n,j,i,inaltime[100],elevi[100],sex[100];
    char s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        elevi[i]=i;
        cin>>s>>inaltime[i];
        if(s=='B')
            sex[i]=1;
        else
            sex[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(sex[i]<sex[j])
            {
                swap(sex[i],sex[j]);
                swap(inaltime[i],inaltime[j]);
                swap(elevi[i],elevi[j]);
            }
            else
            {
                if(sex[i]==sex[j])
                {
                    if(inaltime[i]<inaltime[j])
                    {
                        swap(inaltime[i],inaltime[j]);
                        swap(elevi[i],elevi[j]);
                    }
                }
                else
                    if(inaltime[i]==inaltime[j])
                        if(elevi[i]>elevi[j])
                            swap(elevi[i],elevi[j]);
            }
        }
    }
    for(i=1;i<=n;i++)
        cout<<elevi[i]<<" ";
    return 0;
}
