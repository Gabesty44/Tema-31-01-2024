#include <iostream>

using namespace std;

int main()
{
    int i,j,k=0,n,v[100];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
                k++;
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<"Numarul minim de mutari este: "<<k;
    return 0;
}
