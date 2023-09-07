#include<stdio.h>
int main()
{
	int a,b,sum;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		int temp;
		temp=a;
		a=b;
		b=temp;
	}
	sum=(a+b)*(b-a+1)/2;
	printf("%d",sum);
}