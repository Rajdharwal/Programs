
#include<bits/stdc++.h>
using namespace std;
string decimaltoHexaDecimal(int n)
{
    string ans="";
    int x=1;
    while(x<=n)
        x *=16;
        x /=16;

    while(x>0)
    {
        int lastDigit=n/x;
        n -= lastDigit*x;
        x /= 16;
        if(lastDigit<=9)
        {


        ans =ans+ to_string(lastDigit);     //to_string fn convert int to string
        }
        else
        {
            char c ='A'+lastDigit-10;
            ans.push_back(c);
        }
    }
    return ans;

}
int main ()
{

    int n;
    cout<<"Enter a to convert decimal to hexaDecimal:"<<endl;
    cin>>n;
    cout<<decimaltoHexaDecimal(n);
}

