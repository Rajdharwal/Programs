#include<iostream>
using namespace std;
int updateBit(int n,int pos,int value)
{
    int mask = ~(1<<pos);     
    int m= n & mask;          
    return(m | (value<<pos));


}
int main()
{
    cout<<updateBit(5,1,1);
}


