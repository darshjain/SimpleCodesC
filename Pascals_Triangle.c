#include<stdio.h>
int main()
{
    int n;
    int arr[101][101]={0};
    printf("Enter Number of Rows: ");
    scanf("%d",&n);
    //int arr[n+1][n+1]={0};
    int row=2,col,i,j;
    arr[0][0]=arr[1][0]=arr[1][1]=1;
    while(row<=n)
    {
        arr[row][0]=1;
        for(col=1;col<=row;col++)
            arr[row][col]=arr[row-1][col-1]+arr[row-1][col];
        row++;
    }//function
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("\t %d",arr[i][j]);
        printf("\n");
    }
    return 0;
}