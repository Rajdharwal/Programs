#include<iostream>
using namespace std;
int fac(int num)
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
	int n,r;
	int ans;
	cout<<"enter n and r to find ncr:";
	cin>>n>>r;
	
	ans= fac(n)/(fac(r)*fac(n-r));
	cout<<"nCr ="<<ans;
	
}
