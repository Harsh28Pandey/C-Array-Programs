#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg;
	printf("Enter the number n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the elements a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of array elements=%d\n",sum);
	avg=(float)sum/n;
	printf("Average of array elements=%.2f",avg);
	return 0;
}
