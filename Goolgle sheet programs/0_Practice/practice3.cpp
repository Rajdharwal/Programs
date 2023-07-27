#include<bits/stdc++.h>
using namespace std;
string  htoD(int n)

{
    string ans="";
    int x=1;
    while(x<=n)
    {
        x=x*16;
    }
    x /=16;
    while(x>0)
    {
        int lastDigit=n/x;
        n=n-lastDigit*x;
        if(lastDigit<=9)
        {
            ans=ans+ to_string(lastDigit);
        }
        else
        {
            char c='A'+lastDigit-10;
            ans.push_back(c);
        }
        x=x/16;
    }
    return ans;

}
int main()
{
    int n;
    cin>>n;
    cout<<htoD(n);
}
