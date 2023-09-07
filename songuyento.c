#include<stdio.h>
int main()
{
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a; scanf("%d",&a);
		for(int j=2;j<a/2;j++)
		{
			if(a%j==0) 
			{
				printf("NO\n");
				goto end;
			}
		}
		printf("YES\n");
	end: continue;	
	}
}