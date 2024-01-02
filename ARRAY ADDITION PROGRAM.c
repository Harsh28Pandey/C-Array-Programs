#include<stdio.h>
int main()
{
	int i,n,sum=0; 
	printf("Enter the number n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the number a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of array elements=%d\n",sum);
	return 0;
}
