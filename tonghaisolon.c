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

void sumation(char *sum,char *a,char *b)
{
	int x=strlen(a);
	int y=strlen(b);
	swapstring(a);
	swapstring(b);
	int count=(x>y)?(x):(y);
	int nho=0;
	for(int i=0;i<count;i++)
	{
		if(i<x && i<y)
		{
			int tong= (int)a[i]-48 +(int)b[i]-48 + nho;
			sum[i]= (char)(tong%10 +48);
			nho=tong/10;
		}
		else if(i>=x && i<y)
		{
			int tong= (int)b[i]-48 + nho;
			sum[i]= (char)(tong%10 +48);
			nho=tong/10;
		}
		else if(i<x && i>=y)
		{
			int tong= (int)a[i]-48 + nho;
			sum[i]= (char)(tong%10 +48);
			nho=tong/10;
		}
	}
	if(nho!=0)
	{
		sum[count]= nho+48;
		sum[count+1]='\0';
	}
	else sum[count]='\0';
	swapstring(sum);
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
		char *sum=malloc(501*sizeof(char));
		sumation(sum,a,b);
		puts(sum);
	}
}
