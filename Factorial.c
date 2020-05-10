#include<conio.h>
#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("Enter A Number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The Factorial is %d",f);
	return 0;
}
		
