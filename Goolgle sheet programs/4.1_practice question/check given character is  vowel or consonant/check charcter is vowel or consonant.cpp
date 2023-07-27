#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;

    cout<<"Enter a character to check vowel or consonant:";
    cin>>c;

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        cout<<" It's vowel";
    else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        cout<<"It's vowel";
    else
        cout<<"It's consonant";
return 0;

}
// We also write this code

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;

    cout<<"Enter a character to check vowel or consonant:";
    cin>>c;

        switch (c)
        {
            case ('a'):
            cout<<"It's vowel";
            break;
            case ('e'):
            cout<<"It's vowel";
            break;
            case ('i'):
            cout<<"It's vowel";
            break;
            case('o'):
            cout<<"It's vowel";
            break;
            case ('u'):
            cout<<"It's vowel";
            break;
            case ('A'):
            cout<<"It's vowel";
            break;
            case ('E'):
            cout<<"It's vowel";
            break;
            case ('I'):
            cout<<"It's vowel";
            break;
            case('O'):
            cout<<"It's vowel";
            break;
            case ('U'):
            cout<<"It's vowel";
            break;
            default:
            cout<<"It's consonant";
            break;
        }

return 0;

}

*/
