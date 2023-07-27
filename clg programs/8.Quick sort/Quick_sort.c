// Quick sort
#include<stdio.h>
#include<conio.h>
int quick_sort(int arr[],int first,int last)
{
    int start ,end,pivot,temp;
    if(first < last)
    {
        pivot=first;
        start=first;
        end=last;




        while(start<end)
        {
            while(arr[start]<=arr[pivot] && start<end)
            {
                start++;
            }
            while(arr[end]>arr[pivot]);
            {
                end--;
            }
            if(start<end)
            {
                //swap(arr[start],arr[end])
                temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;

            }
        }
        //swap(arr[lb],arr[end]);
        temp=arr[pivot];
        arr[pivot]=arr[end];
        arr[end]=temp;
        quick_sort(arr,first,end-1);
        quick_sort(arr,end+1,last);
    }

        return end;

}


int main()
{
    int i,n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter element of array\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,n-1);
      printf("after sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}

