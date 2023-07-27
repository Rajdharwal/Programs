#include<stdio.h>
#include<conio.h>
void sortArray(int arr[], int n)
{
    int i,j,temp;
     for( i=0;i<n;i++)
    {



        for( j=0;j<n-i-1;j++)
        {

            if(arr[j]>arr[j+1])
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        }
    }

}

int main()
{
    int n,i,j;
    int arr[100];

    printf("enter size of array");
    scanf("%d",&n);

    printf("Enter %d elements of array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // for sorting array
   sortArray(arr,n);



    // array after sorting
    printf("\n array after sorting \n");
    for( i=0;i<n;i++)
    {
        printf("%d\t",&arr[i]);
    }
    return 0;

}

