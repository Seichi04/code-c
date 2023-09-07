#include<stdio.h>
#include<math.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int a=0;scanf("%d",&a);
		for(int i=pow(10,a-1);i<pow(10,a);i++)
		{
			int j=i;
			int x=0;
			int sum=0;
			int dem=a-1;
			while(j!=0)
			{
				int y=j%10;
				if(y==4) goto label;
				sum+=y;
				x+=y*pow(10,dem);
				dem--;
				j/=10;
			}
			if(sum%10==0 && x==i) printf("%d ",i);
			label: continue;
		}
		printf("\n");
	}
}