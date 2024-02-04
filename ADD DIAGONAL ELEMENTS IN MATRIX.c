#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter the no. of rows:");
	scanf("%d",&m);
	printf("Enter the no. of columns:");
	scanf("%d",&n);
	
	int a[m][n];
	
	printf("Enter the elements of matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	int sum=0;
	for(i=0;i<m && i<n;i++)
	{
		sum += a[i][i];
	}
	printf("Sum of diagonal elements is %d\n",sum);
	return 0;
}
