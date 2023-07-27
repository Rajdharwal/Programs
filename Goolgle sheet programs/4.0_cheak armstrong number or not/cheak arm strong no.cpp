#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number to cheak armstrong or not"<<endl;
	
	cin>>n;
	int sum=0;
	int originaln=n;
   while(n>0)
   {
   	int lastdigit =n%10;
   	sum=sum+pow(lastdigit,3);
   	n=n/10;
   	
   }
   if(sum==originaln)
   cout<<"Armstrong"<<endl;
   else
   cout<<"not ArmStrong";
}
