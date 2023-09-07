#include<stdio.h>
#include<string.h>
int main()
{
	int n=0;scanf("%d",&n);
	getchar();
	for(int h=0;h<n;h++)
	{
		char a[200];
		gets(a);
		int b=strlen(a);
		int count=0;
		if(a[0]!=' ') count++;
		for(int i=0;i<b;i++)
		{
			if(a[i]==' ' && a[i+1]!=' ' && a[i+1]!=NULL) count++;
		}
		printf("%d\n",count);
	}
}