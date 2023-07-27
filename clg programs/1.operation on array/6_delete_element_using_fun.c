#include<stdio.h>
int findElement(int arr[],int n,int deleteElement)
{
    for(int i=0;i<n;i++){
      
        if(  arr[i]==deleteElement)
        return i;
    }
    return -1;
}
int elementDelete(int arr[],int n,int deleteElement)
{
    int pos;
    pos=findElement(arr,n,deleteElement);
    if(pos==-1){
        printf("\nElement not found\n");
        return 0;
    }
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    return(n-1);

}
int main()
{
    int n ,deleteElement;
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
    

    
    //delete element
    n=elementDelete(arr,n,deleteElement);
    if(n==0)
    return 0;
    
    //print updeted array
    printf("\nupdeted array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

     return 0;

    
}