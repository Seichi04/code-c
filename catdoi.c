#include<stdio.h>
#include<math.h>
int thaythe(int b)
{
	switch(b)
	{
		case 0: return 0;break;
		case 1: return 1;break;
		case 8: return 0;break;
		case 9: return 0;break;
	}
}
int main()
{
	int n;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		long long a=0;scanf("%lld",&a);
		int dem=0;
		long long cutnumber=0;
		while(a!=0)
		{
			int b=a%10;
			if(b==0||b==1||b==8||b==9)
			{
				cutnumber+=thaythe(b)*pow(10,dem);
				dem++;
			}
			else
			{
				printf("INVALID\n");
				goto label;
			}
			a/=10;	
		}
		if(cutnumber!=0)printf("%lld\n",cutnumber);
		else printf("INVALID\n");
		label: continue;
	}
}