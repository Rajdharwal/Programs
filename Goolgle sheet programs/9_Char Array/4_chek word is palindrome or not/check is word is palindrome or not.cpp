// word is palindrome or not
// palindrome means a word is same meaning if it is read starting or ending
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of char array"<<endl;
    cin>>n;
    char arr[n+1];
    cout<<"enter char array"<<endl;
    cin>>arr;
    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
        }
    }
    if(check==true)
        cout<<"word is palindrome";
    else
        cout<<"word is not palindrome";

    }

