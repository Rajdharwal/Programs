#include<stdio.h>
int main()
{
    int a[100];
    int i,n=10,pos;
    for(i=0;i<n;i++){
        a[i]=i+1;
    }
    printf("array before deleteElement\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        
    }
    printf("\n");
    //deleteElement=5;
    pos=4;
    //increase size of array
    //n--;
    //shift element forward
    
    for(i=pos-1;i<n;i++){
        a[i]=a[i+1];
        
    }
    n--;
    //print the updeted array
    printf("array after updeted\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }



}