#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mx=-9999999;
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       mx= max(mx,arr[i]);

    }
     cout<<"Max is="<<mx<<endl;
}
