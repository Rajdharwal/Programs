#include<stdio.h>
int main()
{
    int n ,insertElement,pos;
     printf("Enter size of array ,inserting element and their position\n");
    scanf("%d %d %d",&n,&insertElement,&pos);
    // scanf("%d",&n);
    int i,arr[n];
    printf("Enter %d element",n);
    printf("\n");
    // input array
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //print array before inserting element 
    printf("Array before inseting element\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // printf("\nEnter inserting element and their position\n");
    // scanf("%d %d ",&insertElement,&pos);
    n++;
    //insert element
    for(i=n-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=insertElement;
    //print updeted array
    printf("\nupdeted array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

     return 0;

    
}