#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	for(int k=0;k<t;k++)
	{
		char a[81];
		gets(a);
		for(int i=0;i<strlen(a);i++)
		{
			a[i]=tolower(a[i]);
		}
		for(int i=0;i<strlen(a);i++)
		{
			if(i==0 && a[i]==' ')
			{
				for(int j=i;j<strlen(a);j++)
				{
					a[j]=a[j+1];
				}
				i--;
			}
			if(a[i]==' ' && a[i-1]==' ')
			{
				for(int j=i;j<strlen(a);j++)
				{           
					a[j]=a[j+1];
				}
				i--;
			}
		}
		for(int i=0;i<strlen(a);i++)
		{
			if(i==0 || a[i-1]==' ') a[i]=toupper(a[i]);
		}
		puts(a);
	}
	
}