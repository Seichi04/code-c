#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
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
char* max(char *b)
{
	char *c=malloc(20*sizeof(char));
	strcpy(c,b);
	int x=strlen(c);
	for(int i=0;i<x;i++)
	{
		if(c[i]=='5') c[i]='6';
	}
	return c;
}
char* min(char *b)
{
	char *c=malloc(20*sizeof(char));
	strcpy(c,b);
	int x=strlen(c);
	for(int i=0;i<x;i++)
	{
		if(c[i]=='6') c[i]='5';
	}
	return c;
}
int main()
{
	
	int n;scanf("%d",&n);
	while(n--)
	{
		char a[20];scanf("%s",a);
		char b[20];scanf("%s",b);
		char tongmax[30],tongmin[30];
		cong(tongmax,max(a),max(b));
		cong(tongmin,min(a),min(b));
		printf("%s %s\n",tongmin,tongmax);
	} 
	
}