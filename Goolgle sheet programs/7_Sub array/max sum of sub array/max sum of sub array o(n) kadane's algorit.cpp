//problem== find max sum of sub array with o(n) solution.
//There we will use kadane's algorithm.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int currsum=0;
    int maxsum=INT_MIN;
  for(int i=0;i<n;i++)
  {
      currsum +=arr[i];
      if(currsum<0)
      {
          currsum=0;
      }
      maxsum=max(maxsum,currsum);

  }
  cout<<maxsum;
}
