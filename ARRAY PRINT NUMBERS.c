#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the  number n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the number a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
