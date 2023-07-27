#include<iostream>
using namespace std;
int main()
{
    int sum=0;
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
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
}
