
#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    int arr[100];

    cout<<"enter size of array";
    cin>>n;

    cout<<"Enter  elements of array\n"<<endl;
    for(int i=0;i<n;i++)
    {
          cin>>arr[i];
    }
    // for sorting array
   for(i=0;i<n;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           int temp;
           if(arr[j]>arr[j+1])
           {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
   }



    // array after sorting
    cout<<"\n array after sorting \n";
    for( i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}

