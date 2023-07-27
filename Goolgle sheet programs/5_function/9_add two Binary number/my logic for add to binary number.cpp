#include<bits/stdc++.h>


using namespace std;
/*int revs(int ans)
{
    int rev=0;

    while(ans>0)
    {
        int lastd=ans%10;
        rev=rev*10+lastd;
        ans=ans/10;
    }
    return rev;
}*/
int binary(int a,int b)
{
    int ans=0;
    int x=1;
    int precarry=0;

    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            ans=ans+precarry*x;
            precarry=0;
        }
        else if(a%2==1 && b%2==0 ||a%2==0 &&b%2==1)
        {
            if(precarry==1)
            {
                ans=ans+x*0;
                precarry=1;
            }
            else
            {
                ans=ans+1*x;
                precarry=0;
            }
        }
        else
            {
                ans=ans+precarry*x;
                precarry=1;
            }



        x=x*10;
        a=a/10;
        b=b/10;
}
    while(a>0)       //it is for extra precarry
    {
        if(precarry==1)
        {
            if(a%2==1)
            {
                ans=ans+0*x;
                precarry=1;
            }
            else{      //mean a%2==0
                ans=ans+1*x;
                precarry=0;
            }
        }
        else{         //mean precarry is equal to zero
            ans=ans+(a%2)*x;

        }
        a=a/10;
        x=x*10;

    }
    while(b>0){
        if(precarry==1)
        {
            if(b%2==1)
            {
                ans=ans+0*x;
                precarry=1;
            }
            else
            {
                ans=ans+1*x;
                precarry=0;
            }
        }
        else
        {
            ans=ans+(b%2)*x;
        }
        b=b/10;
        x=x*10;
    }
    if(precarry==1)
    {
        ans=ans+1*x;
    }
    //ans=revs(ans);
    return ans;


}



int main()
{
    int a,b;
    cin>>a>>b;
    cout<<binary(a,b);
}
