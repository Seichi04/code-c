#include<stdio.h>
#include<string.h>
#include<math.h>
void swap(char *b)
{
	int x=strlen(b);
	for(int i=0;i<x/2;i++)
	{
		char temp=b[i];
		b[i]=b[x-1-i];
		b[x-1-i]=temp;
	}
}
void cong(char *a,char *b,char *c)
{
	int x=strlen(b);
	int y=strlen(c);
	swap(b);swap(c);
	int max=(x>y)?x:y,nho=0;
	for(int i=0;i<max;i++)
	{
		int n;
		if(i<x &&i<y)
		{
			n=(b[i]-48)+(c[i]-48)+nho;
		}
		else if(i<x && i>=y)
		{
			n=(b[i]-48)+nho;
		}
		else if(i>=x && i<y)
		{
			n=(c[i]-48)+nho;
		}
		a[i]=n%10 +48;
		nho=n/10;
	}
	if(nho!=0)
	{
		a[max]=nho+48;
		a[max+1]='\0';
	}
	else a[max]='\0';
	swap(a);
}
int main()
{
	char a[200];gets(a);
	

	while(strlen(a)!=1)
	{
		int len=strlen(a);
		char b[100],c[100];
		strncpy(b,a+0,len/2);b[len/2]='\0';
		strncpy(c,a+len/2,len-len/2);c[len-len/2]='\0';
		cong(a,b,c);
		puts(a);
	}
	
}