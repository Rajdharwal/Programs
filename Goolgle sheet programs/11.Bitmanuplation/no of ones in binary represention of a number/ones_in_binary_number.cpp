#include<iostream>
using namespace std;
int numberOfOnes(int n)
{
    int count=0;
    while (n)
    {
        n=n & n-1;
        count++; 
        /* code */
    }
    return(count);
    

}
int main()
{
    cout<<numberOfOnes(19)<<endl;
    return 0;
}