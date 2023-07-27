#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n],i,j,index;
    printf("enter element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //for sorting
    for(i=1;i<n;i++)
    {
        index = arr[i];
        j=i-1;
        while(index<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=index;
    }
     printf("sorted array is:\n");
for(i=0;i<n;i++)
{
    printf("%d\t",arr[i]);
}
return 0;

}


