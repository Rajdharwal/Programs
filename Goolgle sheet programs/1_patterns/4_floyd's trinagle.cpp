// floyd's triangel
#include<iostream>
using namespace std;
int main()
{
	int n;
	int k=0;
	cout<<"Enter no of row:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		
		for(int j=1;j<=i;j++)
	{
		
		k=k+j;
		
			cout<<k<<" ";
		
	}
	cout<<endl;
	
	}
}
