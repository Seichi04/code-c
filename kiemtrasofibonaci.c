#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a=0,b=1;
	while(b<n)
	{
		int temp=b;
		b+=a;
		a=temp;
	}
	printf("%d",(b==n)?(1):(0));
}