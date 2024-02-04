#include<stdio.h>
int main()
{
	int i,n,temp;
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
	int start=0;
	int last=n-1;
	for(start=0;start<last;start++)
	{
		temp=a[start];
		a[start]=a[last];
		a[last]=temp;
		last--;
	}
	printf("\nNew array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
