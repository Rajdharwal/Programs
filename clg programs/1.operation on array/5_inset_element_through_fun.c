#include<stdio.h>
// global declearation of function
 void fowardElement(int ,int ,int );
void forwardElement(int arr[],int n,int pos)
{
    for(int i=n-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }

}
int main()
{
    int n,insertElement,pos;
    printf("Enter size of array,Element to insert and their position\n");
    scanf("%d %d %d",&n,&insertElement,&pos);
    int arr[n],i;
    printf("Enter %d element of array\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //print array element before inserting 
    printf("Element before inseting \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    n++;
    //element forwad
    forwardElement(arr,n,pos);
    arr[pos-1]=insertElement;
    //print updeted array
    printf("\nupdeted array\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    
}