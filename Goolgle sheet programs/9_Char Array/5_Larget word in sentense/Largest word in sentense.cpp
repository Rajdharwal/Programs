#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int currLen=0, maxLen=0;
    while(arr[i]!='\0')
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(currLen>maxLen )
                maxLen=currLen;
            currLen=0;
        }
        else
            currLen++;
        if(arr[i]=='\0')
        {
            break;
        }
        i++;
    }
    cout<<maxLen;

}
