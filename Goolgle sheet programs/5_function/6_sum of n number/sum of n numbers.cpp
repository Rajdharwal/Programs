#include<bits/stdc++.h>
using namespace std;
int sum(int num)
{

    int sum=0;
    for(int i=1;i<=num;i++)
    {

        sum += i;
    }
    return sum;
}
int main()
{

    int n;
    cout<<"enter a number for sum of n numbers"<<endl;
    cin>>n;
    cout<<sum(n);
}

