
#include<stdio.h>
int main()
{
	int n,i,c;
	for(n=1;n<=10;n++)
	{
		c=0;
	 for(i=1;i<=n;i++)
 	{
	 	if(n%i==0)
		 c++;
 	}
 	if(c==2)
	 printf("%d\n",n);
 }
	return 0;
}
