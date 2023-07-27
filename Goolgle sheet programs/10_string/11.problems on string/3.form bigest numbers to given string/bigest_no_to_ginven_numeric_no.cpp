#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string s = "15456800280099";
   sort(s.begin(),s.end(),greater<int>());
   cout<<"greater is="<<s;
    return 0;
}
