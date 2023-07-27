#include<iostream>
using namespace std;
int main()

{
	int n;
	cout<<"enter no of rows";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		
		for(int j=i;j>=1;j--)
		{
			cout<<j;
		}
		for(int j=2;j<=i;j++)
		{
			cout<<j;
		}
		
	
	 cout<<endl;
	}
	
	return 0;
	
}


//also we find palindromic pattern use this code.

/*
#include<iostream>
using namespace std;
int main()
{

  int i,j,r;
   cin>>r;
   for(i=1;i<=r;i++)
 {
  int k=i;
  for(j=1;j<=(r-i);j++)
 {
  cout<<" ";
 }
 for( ;j<=r;j++)
 {
  cout<<k;
  k--;
 }
 k=1;
 for( ;j<(r+i);j++)
 {
 k++;
 cout<<k;
 }
 for( ;j<=(2*r-1);j++)
 {
 cout<<" ";
 }
 cout<<endl;
}
 return 0;

}
*/

