//factorial of a number
#include<iostream>
using namespace std;
void fac(int num)
{
	int factorial=1;
	for(int i=1;i<=num;i++)
{
	factorial=factorial*i;
}
cout<<"factorial is ="<<factorial;
}
int main()
{
	int n;
	cout<<"enter a number to find factorial:";
	cin>>n;
	fac(n);
}
