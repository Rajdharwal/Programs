#include<bits/stdc++.h>
using namespace std;
int binarySearch(int n,int arr[],int key)
{
   int s=0;
   int e=n;
   while(s<=e)
   {
       int mid=(s+e)/2;
       if(arr[mid]==key)
       {
           return mid;
       }
       else if(arr[mid>key])
        {e=mid-1;}
       else
       {

        s=mid+1;}
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
    cout<<binarySearch(n,arr,key);

}
