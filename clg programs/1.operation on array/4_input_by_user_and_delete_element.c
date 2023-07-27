#include<stdio.h>
int findElement(int arr[],int n,int deleteElement)
{
    for(int i=0;i<n;i++){
      
        if(  arr[i]==deleteElement)
        return i;
    }
    return -1;
}
int main()
{
    int n ,deleteElement,pos;
     printf("Enter size of array ,Element YOU want to Delete \n");
    scanf("%d %d",&n,&deleteElement);

    int i,arr[n];
    printf("Enter %d element\n",n);
    // input array
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //print array before delete  element 
    printf("Array before delete element\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // printf("\nEnter delete element and their position\n");
    // scanf("%d %d ",&deleteElement,&pos);
    //find Element position
     pos=findElement(arr,n,deleteElement);
    if(pos==-1){
        printf("Element not found\n");
    }

    
    //delete element
    for(i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    //print updeted array
    printf("\nupdeted array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

     return 0;

    
}