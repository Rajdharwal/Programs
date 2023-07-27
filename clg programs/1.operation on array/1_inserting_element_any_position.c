#include<stdio.h>
int main()
{
    int a[100];
    int i,n=10,insertElement,pos;
    for(i=0;i<n;i++){
        a[i]=i+1;
    }
    printf("array before insertElement\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        
    }
    printf("\n");
    insertElement=50;
    pos=5;
    //increase size of array
    n++;
    //shift element forward
    
    for(i=n-1;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=insertElement;
    //print the updeted array
    printf("array after updeted\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }



}