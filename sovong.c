#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void nhan(char b[61],int n,int i)
{
	int nho=0;
	for(int j=n-1;j>=0;j--)
	{
		int h=((int)b[j]-48)*i+nho;
		b[j]=(char)((h%10)+48);
		nho=h/10;
	}
	if(nho!=0) strcpy(b,"0");
}
void swap(char b[61],int n)
{
	char tmp=b[0];
	for(int i=0;i<n;i++)
	{
		if(i==n-1) b[i]=tmp;
		else b[i]=b[i+1];
	}
}
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	for(int h=0;h<t;h++)
	{
		char a[61],b[61][61];
		gets(a);
		int n=strlen(a);
		for(int i=0;i<n;i++)
		{
			strcpy(b[i],a);
			nhan(b[i],n,i+1);
		}
		int demtong=0;
		for(int i=0;i<n;i++)
		{
			int p=0;
			for(int k=0;k<n;k++)
			{
				if(strcmp(b[i],a)==0)
				{
					demtong++;
					p++;
					break;
				}
				else swap(b[i],n);
			}
			if(p==0)
			{
				printf("NO\n");
				goto next;
			}
		}
		printf("YES\n");
		next: continue;
	}
	
}