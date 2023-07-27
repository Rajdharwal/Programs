#include<iostream>
using namespace std;
int* function(){
    static int arr[3]={1,2,3};
    return arr;
}
int main()
{
    int *arr=function();
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    return 0;
}