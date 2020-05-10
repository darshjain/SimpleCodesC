#include<conio.h>
#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter The Number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	printf("%d is a Prime Number",n);
	else
	printf("%d is a Not Prime number",n);
	return 0;
}

