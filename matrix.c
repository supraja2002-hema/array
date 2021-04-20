#include<stdio.h>
int main()
{
	int i,j,a[10][10],sum=0;
	printf("Enter the array elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	printf("The matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",*((*(a+i)+j)));
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			sum=sum+a[i][j];
		}
	}
	printf("Sum of diagonal elements is %d",sum);
	return 0;
}
