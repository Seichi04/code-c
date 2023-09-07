#include<stdio.h>
#include<math.h>
int main()
{
	int a;scanf("%d",&a);
	int a1=a;
	while(a>=10)
	{
		a/=10;
	}
	printf("%d %d",a,a1%10);
}