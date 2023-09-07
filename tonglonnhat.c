#include<stdio.h>
#include<string.h>
void them(char a[20],int len)
{
	int n=strlen(a);
	int add=len-n;
	for(int i=len-1;i>=0;i--)
	{
		if(i>=add) a[i] =a[i-add];
		else a[i]='0';
	}
}
void tong(char c[20],char a[20],char b[20])
{
	int nho=0;
	int n=strlen(a);
	for(int i=n-1;i>=0;i--)
	{
		int h=((int)a[i]-48+(int)b[i]-48) +nho;
		c[i]=(char)(h%10 +48);
		nho=h/10;
	}
	if(c[0]=='0')
	{
		for(int i=0;i<n;i++)
		{
			if(i==n-1) c[i]='\0';
			else c[i]=c[i+1];
		}
	}
}
int main()
{
	int t=0;scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		char a[20],b[20];
		scanf("%s %s",a,b);
		int x=strlen(a),y=strlen(b);
		int maxlen=0;
		(x>=y)?(maxlen=x+1):(maxlen=y+1);
		them(a,maxlen);
		them(b,maxlen);
		char tongso[20];
		tong(tongso,a,b);
		puts(tongso);
	}
	
}