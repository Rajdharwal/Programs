#include<stdio.h>
main()
{
    int i,a,b;
    printf("Enter a number");
    scanf("%d",&b);
    for(i=1;i<=10;i++)
    {
        a=i*b;
        printf("%d\n" ,a*a);
    }
}
