#include<conio.h>
#include<stdio.h>
int main()
{
	int n,i,s=1,f=0,t;
	printf("Enter number\n");
	scanf("%d",&n);
	printf("The first %d terms of fibbonaci series are\n",n);
	if(n==1)
	printf("%d",f);
	else
	 if(n>=2)
	 {
	 	printf("%d\t%d\t",f,s);
	 	for(i=0;i<=n-2;i++)
	 	{
	 		t=f+s;
	 		printf("%d\t",t);
	 		f=s;
	 		s=t;
	 	}
	 	//printf("\n");
	 }
	 else
	 printf("INVALID");
	 return 0;
	}
