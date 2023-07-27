#include<iostream>
#include<algorithm>




#include<string>
using namespace std;
int main()
{
  string s1="ffsfwrqeqeafjajewpoafdasf";
  cout<<"before short="<<s1<<endl;
   sort(s1.begin(), s1.end());
  cout<<"after short="<<s1;
    return 0;
}