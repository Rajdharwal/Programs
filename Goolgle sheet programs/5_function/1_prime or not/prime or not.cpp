#include<iostream>
#include<math.h>
using namespace std;
bool Prime(int n)
{
	for(int j=2;j<=sqrt(n);j++)
	{
		if(n%j==0)
		{
			return false;
		}
		
	}
	return true;

}
bool Prime(int);
int main()
{
	int a,b;
	cout<<"enter two number  to find between prime no"<<endl;
	cin>>a>>b;
	for(int i=a;i>=b;i++)
	{
		if(Prime(i))
		{
			cout<<i<<endl;
		}
	
	}
	return 0;
}

