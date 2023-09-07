#include<stdio.h>
int main()
{
	int n; scanf("%d",&n);
	unsigned long a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if ((unsigned long)sqrt(a[i])*(unsigned long)sqrt(a[i])==a[i]) printf("YES\n");
		else printf("NO\n");
	}
}