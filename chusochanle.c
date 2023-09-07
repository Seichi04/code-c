#include<stdio.h>
int main()
{
	int a; scanf("%d",&a);
	int le=0,chan=0;
	while(a!=0)
	{
		((a%10)%2==0)?chan++:le++;
		a/=10;
	}
	printf("%d %d",le,chan);
}