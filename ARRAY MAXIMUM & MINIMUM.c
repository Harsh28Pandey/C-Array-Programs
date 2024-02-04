#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the array elements at a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	int max = a[0];
	int min = a[0];
	
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
		max = a[i];
		}
	
		if(a[i]<min)
		{
		min = a[i];
		}
	}
	printf("Maximum element in array is %d\n",max);
	printf("Minimum element in array is %d\n",min);
	return 0;
}
