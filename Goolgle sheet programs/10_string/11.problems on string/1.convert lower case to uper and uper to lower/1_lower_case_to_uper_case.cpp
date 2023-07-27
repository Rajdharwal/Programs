
#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str = "fsdfsfsflffjlljkjkajfdskf";
    //convert lower case to uper case
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] -= 32;
        }

    }
    cout<<"after convert into uper case:"<<endl<<str;
}