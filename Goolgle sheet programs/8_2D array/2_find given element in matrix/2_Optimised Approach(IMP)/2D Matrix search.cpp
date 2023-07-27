#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter order of matrix"<<endl; cin>>n>>m;
    int target;
    cout<<"enter targett element "<<endl; cin>>target;
    int mat[n][m];
    cout<<"enter element of matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    bool found=false;             //int r=0,c=n-1;
    int r=0,c=m-1;                //while(r<m && c>=0
    while(r<n && c>=0)
    {
        if(mat[r][c]==target )
        {
            found=true;
        }
        mat[r][c]>target?c--:r++;
        /*else if(mat[r][c]<target)

        {
            c--;
        }
        else
            r++;
            */
    }
    if(found    )
        cout<<"found";
    else
        cout<<"not found";
}
