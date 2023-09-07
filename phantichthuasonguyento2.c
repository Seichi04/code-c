#include<stdio.h>
int main()
{
	int a=0;scanf("%d",&a);
	while(a%2==0)
	{
		if(a==2) printf("2");
		else printf("2x");
		a/=2;
	}
	for(int i=3;i<=a;i+=2)
	{
		while(a%i==0)
		{
			if(i==a) printf("%d",i);
			else printf("%dx",i);
			
			a/=i;
		}
	}
}