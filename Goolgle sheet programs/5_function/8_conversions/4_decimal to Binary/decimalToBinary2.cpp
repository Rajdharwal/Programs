#include<bits/stdc++.h>
using namespace std;
/*int reverse(int ans)
{
    int rev=0;
    while(ans=>0)
    {
       int  lastD=ans%10;
        rev=rev*10+lastD;
        ans=ans/10;
    }
    return rev;
}
*/
int decimalTObinary(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
      int   L=n%2;
        ans=ans+L*x;
        x=x*10;
        n=n/2;
    }
  // ans= reverse(ans);
   return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimalTObinary(n);
}
