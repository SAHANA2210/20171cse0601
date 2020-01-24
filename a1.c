#include<stdio.h>
void main()
{
	int i,j,sum=0,item[4][5];
	printf("enter the cost of items\n");
	for(i=0;i<4;i++)
	{
	  for(j=0;j<5;j++)
	{
	  scanf("%d",&item[i][j]);
	  sum=sum+item[i][j];
	}
	}
	printf("sum=%d\n",sum);
}
