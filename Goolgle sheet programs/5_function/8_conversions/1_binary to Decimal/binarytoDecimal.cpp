#include<bits/stdc++.h>
using namespace std;
int binarytoDecimal(int n)
{

    int x=1;
    int ans=0;
    while(n>0)
    {
       int lastdigit=n%10;
       ans += lastdigit*x;
       x *= 2;
       n /= 10;

    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter  a number to convert binary to Decimal"<<endl;
    cin>>n;
    cout<<binarytoDecimal(n);
}
