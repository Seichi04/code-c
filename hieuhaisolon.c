#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swapstring(char *str)
{
	int n=strlen(str);
	for(int i=0;i<n/2;i++)
	{
		char temp=str[i];
		str[i]=str[n-i-1];
		str[n-i-1]=temp;
	}
}

void difference(char *dif,char *a,char *b)
{
	int x=strlen(a);
	int y=strlen(b);
	swapstring(a);
	swapstring(b);
	int nho=0;
	for(int i=0;i<x;i++)
	{
		if(i<y)
		{
			if(a[i]>=(b[i]+nho)) dif[i]=(a[i]-48)-(b[i]-48+nho)+48;
			else
			{
				dif[i]=(a[i]-48 +10)-(b[i]-48+nho)+48;
				nho=1;
			}
		}
		else if(i>=y)
		{
			if(a[i]-48>=nho) dif[i]=(a[i]-48)-(nho)+48;
			else
			{
				dif[i]=(a[i]-48 +10)-(nho)+48;
				nho=1;
			}
		}	
	}
	if(dif[x-1]=='0') dif[x-1]='\0';
	else dif[x]='\0';
	swapstring(dif);
}
int main()
{
	int n;scanf("%d\n",&n);
	for(int i=0 ; i<n ; i++)
	{
		char *a=malloc(500*sizeof(char));
		char *b=malloc(500*sizeof(char));
		gets(a);
		gets(b);
		char *dif=malloc(501*sizeof(char));
		if(strlen(a)>strlen(b) || (strlen(a)==strlen(b) && a[strlen(a)-1]>b[strlen(b)-1]))
		{
			difference(dif,a,b);
		}
		else difference(dif,b,a);
		puts(dif);
		free(a);
		free(b);
		free(dif);
	}
}
