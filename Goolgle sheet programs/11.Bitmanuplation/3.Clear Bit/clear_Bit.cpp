// clear bit menas( clear bit at particular position)
//Alogorithm
//step1. start                                                      supose given no is 5 (0101)  i=2
//step2. using left shift operator left shift bit 1 at given pos    0101  1<<i  0100
//step3. after left shift take comlement                            ~(0100)= 1011
//step4. return(n & mask);                                          0101 & 1011  = 0001
#include<iostream>

using namespace std;
int clearBit(int n,int pos)
{
    int mask= ~(1<<pos);
    return(n & mask);
}
int main()
{
    cout<<clearBit(5,2);
}