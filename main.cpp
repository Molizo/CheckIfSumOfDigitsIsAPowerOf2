#include <iostream>

using namespace std;

int main()
{int n,p,s,uc,x,a;
    x=1;
    p=1;
    s=0;
    cout<<"Introduceti numarul:";
    cin>>n;
    a=n;
    while(n>0)
    {
        uc=n%10;
        s=s+uc;
        n=n/10;
    }
    while(p<=10000)
    {
        if(s==p)
        {
            x=0;
            break;
        }
        p=p*2;
    }
    if(x==0)
    {
        cout<<endl<<"Suma cifrelor numarului "<<a<<" este o putere a lui 2."<<endl;
    }
    else
    {
        cout<<endl<<"Suma cifrelor numarului "<<a<<" nu este o putere a lui 2."<<endl;
    }
}
