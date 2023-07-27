#include<iostream>
using namespace std;
int main()
{
	int arr[5]={2,3,4,5,6};
	int i,max=0;
	cout<<"Element of arry is:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"Element of subarray is:"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<arr[i]<<endl;
	}
	for(i=0;i<3;i++)
	{
		if(max<arr[i])
		{
		max=arr[i];
		}
	}
	cout<<"max is:"<<max;
	
}
