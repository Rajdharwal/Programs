#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    int s;
    cout<<"enter sum to find index";
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=0,sum=0,st=-1,ed=-1;
    while(j<n && sum+a[j]<=s)
    {
        sum +=a[j];

        j++;
    }
    if(sum==s)
    {
       cout<<i+1<<" "<<j<<endl;
       return 0;
    }
    while(j<n)
    {
        sum +=a[j];
        while(sum>s)
        {
            sum -=a[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            ed=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<ed;

}
