#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of stack"<<endl;
    cin>>n;
    int stack[n];
    for(int i=0;i<n;i++)
    {
        cin>>stack[i];
    }
    for(int i=n-1;i>=0;i--)
    cout<<stack[i]<<" ";
    return 0;
}