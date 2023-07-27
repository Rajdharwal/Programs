#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
  //  int arr[100];

    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter  elements of array\n");
    for(int i=0;i<n;i++)
    {
          scanf("%d",&arr[i]);
    }
    // for sorting array
   for(i=0;i<n;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           int temp;
           if(arr[j]>arr[j+1])
           {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
   }



    // array after sorting
    printf("\n array after sorting \n");
    for( i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
    return 0;

}

