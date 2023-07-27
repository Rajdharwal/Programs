#include<stdio.h>
int main()
{
    int m,n;


    printf("Enter the size of first array a \n and second array b\n");
    scanf("%d %d",&m,&n);
     int a[m],b[n],c[m+n];
    printf("Enter %d element of first array a\n",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }


    printf("Enter %d element of second array b\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int ptr1=0,  ptr2=0,ptr3=0;
    while(ptr1<m && ptr2<n)
    {
        if(a[ptr1]<b[ptr2])
        {
            c[ptr3]=a[ptr1];
            ptr1++;
            ptr3++;
        }
        else{
            c[ptr3]=b[ptr2];
            ptr2++;
            ptr3++;
        }
        while(ptr1<n)
        {
            c[ptr3]=a[ptr1];
            ptr1++;
            ptr3++;
        }
        while(ptr2<m)
        {
            c[ptr3]=b[ptr2];
            ptr2++;
            ptr3++;
        }
        printf("final array after marging \n");
        for(int i=0;i<n+m;i++)
        {
            printf("%d ",c[i]);
        }
    }



}
