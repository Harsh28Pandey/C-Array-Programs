#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the array elements a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Old array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nAssending order\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
