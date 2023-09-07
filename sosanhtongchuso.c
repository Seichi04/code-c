#include<stdio.h>
int tongchuso(int x)
{
	int sum=0;
	while(x!=0)
	{
		sum+=x%10;
		x/=10;
	}
	return sum;
}
int main()
{
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	printf("%d %d",(tongchuso(a)<=tongchuso(b))?(a):(b),(tongchuso(a)<=tongchuso(b)?(b):(a)));
}