#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number to cheak prime or not"<<endl;
	cin>>n;
	bool flag =0;
	for(int i=2;i<=sqrt(n);i++)  //for(int i=2;i<n;i++)     //sqrt is a function to find squre of any number.
	{
		if(n%i==0)
		{
			cout<<"non prime"<<endl;
			flag=1; 
			break;
		}
		

	}
	if(flag==0)
	cout<<"prime";
}
