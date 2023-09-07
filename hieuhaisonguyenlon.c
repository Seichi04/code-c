#include<stdio.h>
#include<string.h>
void chuyen(char a[505],int n,int m)
{
	n++;
	while(n<=m)
	{
		char temp[505]="0";
		strcat(temp,a);
		strcpy(a,temp);
		n++;
	}
}
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	for(int k=0;k<t;k++)
	{
		char a[505],b[505],sum[510];
		gets(a);gets(b);
		if(strlen(a)>strlen(b)) 
		{
			chuyen(b,strlen(b),strlen(a));
		}
		else if(strlen(a)<strlen(b)) 
		{
			chuyen(a,strlen(a),strlen(b));
		}
		int n=strlen(a);
		int remind=0;
		for(int i=n-1;i>=0;i--)
		{
			int s=(int)a[i]-48+(int)b[i]-48+remind;
			if(s<10) 
			{
				sum[i]=(char)(s+48);
				remind=0;
			}
			else 
			{
				sum[i]=(char)(s-10+48);
				remind=1;
			}
		}
		int l=0;
		while(sum[l]=='0')
		{
			l++;
		}
		for(int i=l;i<strlen(sum);i++)
		{
			printf("%c",sum[i]);
		}
		printf("\n");
	}
}