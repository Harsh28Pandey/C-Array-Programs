#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter the no. of rows:");
	scanf("%d",&m);
	printf("Enter the no. of column:");
	scanf("%d",&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the first 2-D array elements a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int b[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the second 2-D array elements b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	int add[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Addition of matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",add[i][j]);
		}
		printf("\n");
	}
	return 0;
}
