#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
 int score=0,i;
 int n;
 int random[]={1,5,7,9,8,7,4,5,1,3,2,1,6,5,7,8,9,7,5,1,2,1,3,1,4,5,4,6,5,4,6,7,8,9,7,4,2};
 while(1)
 {
 	for(i=0;i<1000;i++)
 	{
			printf("Guess it between 1 to 9!!!: ");
			scanf("%d",&n);
			if(random[i]==n)
			{
				score++;
			 printf("Noice!!!\nYour Score is %d\n",score);
			}
			else
			printf("You dissapointed\nYour Score is %d\n",score);
			printf("Next Try\n");
		}
	}
 return 0;
}

