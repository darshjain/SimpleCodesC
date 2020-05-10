#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter a Number\n");
	scanf("%d",&n);
	for(i=0;i*i<n;i++)
	{
	}
	if(i*i==n)
	{
	printf("square\n");
	printf("%d",i);
}
	else
	printf("not a square");
	return 0;
} 
