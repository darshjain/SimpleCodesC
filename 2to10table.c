#include<stdio.h>

int main()
{
	int i,a,n,j;
	printf("The tables of 2 to 10 are:\n");
	for(i=2;i<=10;i++)
	{
		printf("The table of%d\n",i);
		for(j=1;j<=10;j++)
		{
			a=i*j;
			printf("%d\n",a);
		}
	}
	getch();
	return 0;
}
