#include <iostream>

using namespace std;

int main()
{
    int rand=0,i,primulElement=1,n,k,numar=1,pozitie;
    cin>>n;
    if(n==0)
        return 0;
    do
    {
        rand++;
        if(n==1)
            numar+=rand;
        else
            numar+=rand+1;
        cin>>n;
    }
    while(n!=0);
    cout<<numar<<endl;
    cin>>k;
    for(i=1;i<=rand;i++)
        primulElement+=i;
    pozitie=k-primulElement;
    cout<<primulElement;
    return 0;
}
