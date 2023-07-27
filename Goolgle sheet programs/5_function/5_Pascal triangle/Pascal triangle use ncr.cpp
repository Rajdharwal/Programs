//pascal triangle
#include<iostream>
using namespace std;
int fact(int num)
{
	int factorial=1;
	for(int i=1;i<=num;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}

int main()
	{
	int rows;
	cout<<"Enter no of rows";
	cin>>rows;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<=i;j++)
		{
			int ncr;
			ncr=fact(i)/(fact(i-j)*fact(j));
			cout<<ncr;
			
		}
		cout<<endl;
	}

}
