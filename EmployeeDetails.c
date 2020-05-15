#include <stdio.h>
#include <string.h>
 struct employee
 { char name[30];
 int code,salary,Doj;
 };
 struct employee emp[10];
void ask()
 {
 int i;
 for(i=0;i<=10;i++)
  {
    printf("Enter recordfor employee %d ",i);
      printf("\n Name:\n");
    scanf("%s",emp[i].name);
    printf("\n ID code:\n");
    scanf("%d",emp[i].code);
    printf("\n Salary:\n");
    scanf("%d",emp[i].salary);
 printf("\n Date of join:\n");
 scanf("%d",emp[i].Doj);
  }
 }
 void print()
 {int i;
 for(i=0;i<=10;i++)
  {
    printf("Enter record for employee %d ",i);
    printf("\n Name:\n");
     printf("\n ID code:\n");
      printf("\n Salary:\n");
       printf("\n Date of join:\n");
 }
}
int main()
{
  ask();
  print();
  return(0);
}
