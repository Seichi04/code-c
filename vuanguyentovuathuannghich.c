#include<stdio.h>
#include<math.h>
int checkthuannghich(int i)
{
	int a=i,b=i,c=0;
	int dem=0;
	while(a!=0)
	{
		dem++;
		a/=10;
	}
	while(b!=0)
	{
		c+=(b%10)*pow(10,dem-1);
		b/=10;
		dem--;
	}
	if(c==i) return 1;
	else return 0;
}
int checknguyento(int i)
{
	int dem=0;
	for(int j=3;j<=sqrt(i);j+=2)
	{
		if(i%j==0) dem++;
	}
	if(dem==0) return 1;
	else return 0;
}
int main()
{
	int n=0; scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int a=0,b=0;scanf("%d %d",&a,&b);
		int dem=0;
		for(int i=a;i<=b;i++)
		{
			if(i%2==0) continue;
			if(checkthuannghich(i)==1) 
			{
				if(checknguyento(i)==1) 
				{
					printf("%d ",i);
					dem++;
				}
			}
			if(dem!=0 && dem%10==0) 
			{
				printf("\n");
				dem=0;
			}
		}
		printf("\n\n");
	}
}