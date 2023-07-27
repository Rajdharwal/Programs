#include<stdio.h>

int main()
{
    int n;
    int count = 1;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // array before sorting
    printf("array before sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    // for sorting array

    while(count<n){

        for(int i=0;i<n-count;i++)
        {
            int temp;
            if(arr[i]>arr[i+1])
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
        }
        count++;
    }
    // array after sorting
    printf("\n array after sorting \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",&arr[i]);
    }
    return 0;

}
