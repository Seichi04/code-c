#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a[n];float sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("%0.3f",sum/n);
}