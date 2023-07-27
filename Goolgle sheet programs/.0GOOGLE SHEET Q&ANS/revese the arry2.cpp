#include<iostream>
using namespace std;
int main()
{
	int arr[5];

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
	cout<<"arry element after reverse:"<<endl;
	for(i=4;i>=0;i--)
	{
		cout<<arr[i]<<endl;
		}	
		
   


}

