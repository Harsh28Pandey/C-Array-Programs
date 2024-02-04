#include<stdio.h>

int main()
{
	int i,j,k,m,n,p,q;
	printf("Enter the first array\n");
	int a[10][10],b[10][10],res[10][10];
	printf("Enter the no. of rows:");
	scanf("%d",&m);
	printf("Enter the no. of column:");
	scanf("%d",&n);
	printf("Enter the first array elements\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the second array\n");
	printf("Enter the no. of rows:");
	scanf("%d",&p);
	printf("Enter the no. of column:");
	scanf("%d",&q);
	printf("Enter the second array elements\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Matrix multiplication\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			res[i][j]=0;
			for(k=0;k<n;k++)
			{
				res[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
