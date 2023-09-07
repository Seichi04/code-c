#include<stdio.h>
int main()
{
	int n; scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		long long a; scanf("%lld",&a);
		printf("%d = ",a);
		int dem=0;
		for(int i=2;i<=a;i++)
		{
			int dem1=0;
			while(a%i==0)
			{
				dem1++;
				a/=i;
			}
			if(dem1!=0) 
			{
				dem++;
				if(dem!=1) printf(" * ");
				printf("%d^%d",i,dem1);
				
				
			}	
		}
		printf("\n");
	}
}