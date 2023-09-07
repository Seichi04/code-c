#include<stdio.h>
#include<string.h>
int main()
{
	int n=0;scanf("%d",&n);
	getchar();
	for(int h=0;h<n;h++)
	{
		char a[500];
		gets(a);
		int x=strlen(a);
		if(a[0]!='8' || a[x-1]!='8' ) 
		{
			printf("NO\n");
			continue;
		}
		int sum=0;
		for(int i=0;i<x;i++)
		{
			sum+=((int)a[i]-48);
		}
		if(sum%10!=0) 
		{
			printf("NO\n");
			continue;
		}
		char b[x];
		strcpy(b,a);
		if(strcmp(b,a)==0) printf("YES\n");
		else printf("NO\n");
	}
	
}
