// set bit means (set a bit at a particular position)
#include<iostream>

using namespace std;
int setBit(int n,int pos)
{
    return(n | (1<<pos));
}
int main()
{

   cout<<setBit(5,1);

}