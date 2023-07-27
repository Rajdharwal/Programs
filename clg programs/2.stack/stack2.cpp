#include<iostream>
using namespace std;
 
//  int sort(int *a[],int n);
 int* sort(int *a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]<a[j]){
                int temp=0;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    // return a;
 }
 int main(){
    int max_revenu=0;
    // cin>>n;
    static int a[5]={4,2,7,1,3};
//     for(int i=0;i<n;i++)
//  {
//     cin>>a[i];
//  }
 
 sort(a,5);
 for(int i=0;i<5;i++){
    if(i=0){
        max_revenu=a[i];
    }
    else if((a[i]*i)>max_revenu)
    {
        max_revenu=a[i]*i;
    }
    cout<<max_revenu<<endl;
    return 0;
 }
        

 }
 