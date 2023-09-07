#include<stdio.h>
#include<math.h>
int main()
{
	int n=0;scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		int a;scanf("%d",&a);
		int b=pow(10,a);
		int c=pow(10,a-1);
		for(int i=c;i<b;i++)
		{
			int x,y,dem=0,j=i;
			while(j>=10)
			{
				y=j%10;
				x=(j/10)%10;
				if(x>y) 
				{
					dem++;
					break;
				}
				j/=10;
			}
			if(dem==0) printf("%d ",i);
		}
		printf("\n");
	}
}