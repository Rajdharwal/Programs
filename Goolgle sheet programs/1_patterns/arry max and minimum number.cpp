#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int arr[10];
	int i, max=0,min;
	cout<<"Enter ten element in arry to find max and min:";
	for(i=0;i<9;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<9;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		
		if(arr[0]>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<endl<<"Max is="<<max<<endl;
	cout<<"Mini is="<<min;
	return 0;
}
