//Pair sum problem
//Check if there exist two element in an array such that their sum is equal to given k

#include<bits/stdc++.h>

using namespace std;
bool pairsum(int n,int arr[],int k)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                cout<<i<<" "<<j<<endl;
                return true;
            }
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
