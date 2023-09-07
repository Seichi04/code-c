#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	long a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%ld", &a[i]); printf("%ld\n", a[i]*a[i]);
	}
}