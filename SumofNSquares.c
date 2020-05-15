#include <stdio.h>

int main() {
int n,i,sum=0;
printf("enter value of n\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
sum=sum+(i*i);
printf("Sum of squares of n numbers is %d",sum);
    return 0;
}
