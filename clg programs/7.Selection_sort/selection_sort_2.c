#include<stdio.h>
#include<conio.h>


int main()
{
    int n,i,j,min,temp;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter element of array\n");
    for(i=0;i<n;i++ )
    {
        scanf("%d",&arr[i]);
    }
    //for sorting
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }

        }
        if(min != i)
        {
            //swap(&arr[i],&arr[min]);
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;


        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
     return 0;
}
