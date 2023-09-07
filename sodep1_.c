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
		for(int i=0;i<x;i++)
		{
			if(((int)a[i]-48)%2!=0) 
			{
				printf("NO\n");
				goto endturn;
			}
		}
		char b[500];
		strcpy(b,a);
		printf("%s\n",(strcmp(b,a)==0)?"YES":"NO");
		endturn: continue;
	}
}