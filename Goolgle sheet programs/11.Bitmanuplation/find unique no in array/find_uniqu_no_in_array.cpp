//write a program to find a unique number in an array where all numbers acept one ,are present twice
#include<iostream>
using namespace std;
int uniqueNo(int arr[],int n){
    int xorSum = 0;
    for(int i=0;i<n;i++)
{
    xorSum = xorSum^arr[i];
}
return(xorSum);
}
int main()
{
    int arr[7]={1,2,10,2,1,10,99};
    cout<<"Unique no of array is: "<<uniqueNo(arr,7);
}