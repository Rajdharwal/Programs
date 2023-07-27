#include<stdio.h>
#include<conio.h>
int getMax(int a[],int n)
{
    int i,max=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
countSort(int a[],int n,int pos)
{
    int i,k,b[n];
    int count[10]={0};
    for(i=0;i<n;i++)
    {
        ++count[(a[i]/pos)%10];

    }
    for(i=0;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];

    }
    for(i=n-1;i>=0;i--)
    {
        b[--count[(a[i]/pos)%10]]=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}
void redix_sort(int a,int n)
{
    int pos;
    int max=getMax(a,n);
    for(pos=1;max/pos>0;pos*10)
    {
        countSort(a,n,pos);
    }

}

int main()
{
    int n,i;
    printf("enter size of array\n ");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    redix_sort(a,n);
    printf("array after sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
