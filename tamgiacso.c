#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	int a=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			int b=1;
			for(int j=0;j<=a;j++)
			{
				printf("%d",b);
				b+=2;
			}
		}
		else
		{
			int b=2;
			for(int j=0;j<=a;j++)
			{
				printf("%d",b);
				b+=2;
			}
		}
		a++;
		printf("\n");
	}
}