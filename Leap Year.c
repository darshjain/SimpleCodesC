#include<conio.h>
#include<stdio.h>
int main()
{
	int y;
	printf("Enter Year\n");
	scanf("%d",&y);
	if((y%400==0)||(y%4==0&&y%100!=0))
	printf("Leap Year");
	else
	printf("Not a Leap Year");
	return 0;
}
