#include<stdio.h>
#include<string.h>
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	for(int k=0;k<t;k++)
	{
		char a[21];
		gets(a);
		int n=strlen(a);
		int dem=0;
		for(int i=0;i<(n/2);i++)
		{
			if(a[i]!=a[n-1-i]) dem++;
		}
		if(dem==1) printf("YES\n");
		else if(dem==0 && n%2==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}