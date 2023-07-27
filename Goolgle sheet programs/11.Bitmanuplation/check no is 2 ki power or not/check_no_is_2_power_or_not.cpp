//A program to check a number is power of 2 or not
#include<iostream>
using namespace std;

bool is2power(int n)
{
    return(n && !(n & n-1));
}
int main()
{
    cout<<is2power(8)<<endl;
    return 0;
} 


