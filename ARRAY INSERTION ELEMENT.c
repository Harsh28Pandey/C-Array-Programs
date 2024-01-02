#include<stdio.h>
int main()
{
	int n,i,pos,ins,ser;
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
	printf("\nEnter the position of element to insert:");
	scanf("%d",&pos);
	printf("Enter the inserted element:");
	scanf("%d",&ins);
	n=n+1;
	for(i=n-1;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=ins;
	printf("New array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nWhich element do you want to search:");
	scanf("%d",&ser);
	for(i=0;i<n;i++)
	{
		if(a[i]==ser)
		{
			printf("%d element are present in array position %d",ser,i+1);
			break;
		}
	}
	if(i==n)
	{
		printf("%d element are not present in array",ser);
	}
	return 0;
}
