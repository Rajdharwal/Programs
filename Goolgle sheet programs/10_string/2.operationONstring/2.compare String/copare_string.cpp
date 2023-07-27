#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string s1="abc";
    //  string s2="xyz";
    
    // cout<< s2.compare(s1)<<endl;
    string s1="abc";
     string s2="abc";

     if(!s2.compare(s1))    //if(s2.compare(s1))
    {
        cout<<"string are equal"<<endl;
    }
    cout<< s2.compare(s1)<<endl;
   
    return 0;
}