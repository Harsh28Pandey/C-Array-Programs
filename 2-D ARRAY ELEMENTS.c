#include<stdio.h>
int main()
{
	int i,j,m,n;
	int a[3][3];
	printf("Enter the number of rows:");
	scanf("%d",&m);
	printf("Enter the number of column:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the array elements a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Array elements\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	return 0;
}
