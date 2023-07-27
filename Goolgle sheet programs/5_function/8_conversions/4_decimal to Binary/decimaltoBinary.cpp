#include<bits/stdc++.h>
using namespace std;
int decimaltoBinary(int n)
{
int  ans=0;
int     x=1;
    while(x<=n)
     {
      x *=2;
     }
        x /=2;

    while(x>0)
    {
        int lastDigit=n/x;
        n -= lastDigit*x;
        x /= 2;
        ans =ans*10+lastDigit;

    }
    return ans;

}
int main ()
{

    int n;
    cout<<"Enter a to convert decimal to binary"<<endl;
    cin>>n;
    cout<<decimaltoBinary(n);
}
