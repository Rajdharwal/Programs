// 2D array take input and print it.
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    cout<<"enter no of row n and no of column m"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter element of 2D array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"2D array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }

}
