#include<stdio.h>
#include<math.h>
#include<string.h>
int dayngat(char y[10],int n)
{
	int hieu=y[1]-y[0];
	for(int i=1;i<n;i++)
	{
		if(y[i]!=y[i-1]+hieu) return 0;
	}
	return 1;
}
int bangnhau(char y[10],int n)
{
	for(int i=1;i<n;i++)
	{
		if(y[0]!=y[i]) return 0;
	}
	return 1;
}
int daucuoi(char y[10],int n)
{
	if(y[3]!=y[4]) return 0;
	if(y[0]==y[1]&&y[1]==y[2]) return 1;
	else return 0;
}
int loctho(char y[10],int n)
{
	for(int i=0;i<n;i++)
	{
		if(y[i]!='6' && y[i]!='8') return 0;
	}
	return 1;
}
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		char x[10],y[10];
		scanf("%s %s",x,y);
		y[3]=y[4];
		y[4]=y[5];
		y[5]='\0';
		int n=strlen(y);
		if( dayngat(y,n)==1 || bangnhau(y,n)==1 ||	daucuoi(y,n)==1 || loctho(y,n)==1 )printf("YES\n");
		else printf("NO\n");
	}
	
}