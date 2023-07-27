#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to find factor:";
    cin>>n;
   for(int i=1;i<=n;i++)
   {
       if(n%i==0)
        cout<<i<<endl;
   }
}
