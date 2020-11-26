#include <iostream>

using namespace std;

int main()
{
    long int n,i, s=0;
    cout<<"Enter an integer n: ";cin>>n;
    if (n>0)
    {
        for (i=0; i<=n ; i++)
        s+=i;
        cout<<"1+2+3+...+"<<n<<" is "<<s<<endl;
    }
    else if (n==0)
            cout<<"sum is 0"<<endl;
    else
       {
           for (i=0; i>=n; i--)
            s+=i;
            cout<<"-1-2-3-...."<<n<<" is "<<s<<endl;
       }
    return 0;
}
