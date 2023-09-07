#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int checktn(char a[501])
{
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[n-i-1]) return 0;;
	}
	return 1;
}
int checkcs(char a[501])
{
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		if(((int)a[i]-48)!=2 && ((int)a[i]-48)!=3 && ((int)a[i]-48)!=5 && ((int)a[i]-48)!=7) return 0;
	}
	return 1;
}
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	for(int h=0;h<t;h++)
	{
		char a[501];
		gets(a);
		if ( checktn(a)==1 && checkcs(a)==1 ) printf("YES\n");
		else printf("NO\n");
	}                    
	
}
