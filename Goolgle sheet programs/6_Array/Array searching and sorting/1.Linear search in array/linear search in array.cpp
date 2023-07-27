#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n,int arr[],int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }

        return(-1);
}
int main()
{
    int n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter element of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter no which you want to find :";
    cin>>key;
    cout<<linearSearch(n,arr,key);

}
