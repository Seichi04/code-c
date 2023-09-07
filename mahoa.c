#include<stdio.h>
#include<string.h>
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	for(int k=0;k<t;k++)
	{
		char a[101];
		gets(a);
		int n=strlen(a);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[i]==a[j]) goto next;
			}
			int dem=1;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]==a[i]) dem++;
			}
			printf("%c%d",a[i],dem);
			next: continue;
		}
		printf("\n");
	}
	
}