#include<stdio.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int a=0;scanf("%d",&a);
		int tich=1;
		if(a%2==0)
		{
			tich*=2;
			while(a%2==0)
			{
				a/=2;
			}
		}
		
		for(int i=3;i<=a;i+=2)
		{
			if(a%i==0)
			{
				tich*=i;
				while(a%i==0)
				{
					a/=i;
				}
			}	
		}
		printf("%d\n",tich);
	}
	
}