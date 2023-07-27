#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int n,i,j,min;
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
            swap(&arr[i],&arr[min]);
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
     return 0;
}
