#include<iostream>
using namespace std;
int main()
{
	int row ;
	cout<<"Enter no of row and col:";
	cin>>row;
	int space=(2*row)/2;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=;j++)
		{
			for(int j=1;j<=space;j++)
			{
				cout<<" ";
			}
			for(int j=1;j<=2*row-1;j++)
			{
				if(j==1||j==2*row-1)
				cout<<"*";
				else
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
		space--;
	
	}
	space=0;
		for(int i=row;i>=1;i++)
	{
		for(int j=1;j<=col;j++)
		{
			for(int j=1;j<=space;j++)
			{
				cout<<" ";
			}
			for(int j=1;j<=2*row-1;j++)
			{
				if(j==1||j==2*row-1)
				cout<<"*";
				else
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
		space++;
	}
	
	return 0;
}
