#include<stdio.h>
 main()
{
	int i=1,b,c;
	printf("Enter the number which you want table");
	scanf("%d" ,&b);
	while(i<=10)
	{
		c = b*i;
		printf("%d\n" ,c);
		i = i+1;

	}

}
