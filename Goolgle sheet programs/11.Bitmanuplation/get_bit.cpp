//find the bit at a particular position (say i) of the given number N. 
#include<iostream>

using namespace  std;
int getBit(int n,int pos)
{
    return(n & (1<<pos!=0));

}
int main()
{
    int num;cin>>num;
    int position;cin>>position;
   cout<<getBit(num,position);
}