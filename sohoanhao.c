#include<stdio.h>
int main()
{
	int a; scanf("%d",&a);
	int sum=1;
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0) sum+=i;
	}
	if(sum==a) printf("1");
	else printf("0");
}