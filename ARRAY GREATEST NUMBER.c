#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,temp;
	printf("Enter the number of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the number of array a[%d]:",i);
		scanf("%d",&a[i]);
	}
		if(temp<a[i])
		{
			temp=a[i];
			printf("Grestest number=%d",a[i]);
		}
	return 0;
}
