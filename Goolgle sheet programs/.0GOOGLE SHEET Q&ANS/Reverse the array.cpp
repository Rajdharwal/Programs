#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int arr1[5];
	int i;
	cout<<"Enter five element array:"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"arry element before reverse:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
		
    for(i=0;i<5;i++)
    {
    	arr1[i]=arr[i];
	}
	cout<<"Element after reverse arry:"<<endl;
	for(i=4;i>=0;i--)
	{
		
		cout<<arr1[i]<<endl;
	}



}

