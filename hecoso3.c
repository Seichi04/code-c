#include<stdio.h>
#include<string.h>
int main()
{
	int n=0;scanf("%d",&n);
	getchar();
	for(int k=0;k<n;k++)
	{
		char a[19];
		gets(a);
		int m=strlen(a);
		for(int i=0;i<m;i++)
		{
			if(a[i]!='0' && a[i]!='1' && a[i]!='2')
			{
				printf("NO\n");
				goto endturn;
			} 
		}
		printf("YES\n");
		endturn: continue;
	}
}