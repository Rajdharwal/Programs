//Pair sum problem
//Check if there exist two element in an array such that their sum is equal to given k

#include<bits/stdc++.h>

using namespace std;
bool pairsum(int n,int arr[],int k)
{
   int low=0;
   int high=n-1;
   while(low<high)
   {
       if(arr[low]+arr[high ]==k){
        cout<<low<<" "<<high<<endl;
       return true;}
       else if(arr[low]+arr[high]>k)
       {
           high--;
       }
       else
       {
           low++;
       }
   }
   return false;
}
int main()
{
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(8,arr,k);
}
