#include<stdio.h>
int main()
{
	int a;scanf("%d",&a);
	int dem=0;
	while(a!=0)
	{
		dem++;
		a/=10;
	}
	printf("%d",dem);
}