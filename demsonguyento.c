#include<stdio.h>
#include<math.h>
int checknguyento(int a)
{
	int dem=0;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			dem++;
			break;
		}
	}
	if(dem==0) return 1;
	else return 0;
}
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int a=0,b=0;scanf("%d %d",&a,&b);
		if(a>b)
		{
			int temp=a;
			a=b;
			b=temp;
		}
		int dem=0;
		for(int i=a+1;i<b;i++)
		{
			int j=i;
			while(j!=0)
			{
				int x=j%10;
				if(x!=2&&x!=3&&x!=5&&x!=7)
				{
					goto label;
				}
				j/=10; 
			}
			if(checknguyento(i)==1) dem++;
			label: continue;
		}
		printf("%d\n",dem);
	}
}