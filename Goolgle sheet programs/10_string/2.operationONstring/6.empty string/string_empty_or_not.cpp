#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="abc";
    cout<<"string is="<<s1<<endl;
    
    s1.clear();
    if(s1.empty())
    {
        cout<<"string is empty"<<endl;
    }

    return 0;
}