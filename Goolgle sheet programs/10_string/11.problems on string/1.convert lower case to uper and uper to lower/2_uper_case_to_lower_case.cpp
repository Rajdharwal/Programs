#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str = "FSFKJSFKFJKFJLSAADFASDKFJAKFJASDFDS";
    //convert uper case to lower case
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] +=32;
        }


    }
    cout<<"after convert into lower case:"<<endl<<str;

}