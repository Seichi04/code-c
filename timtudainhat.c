#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[1001];
	gets(a);
	char b[1001][1001];
	int c[1001];
	char *token;
	token=strtok(a," ");
	int n=0,max=0;
	while(token != NULL)
	{
		strcpy(b[n],token);
		c[n]=1;
		if(strlen(b[n])>max) max=strlen(b[n]);
		n++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++)
	{
		if(strlen(b[i])==max)
		{
			for(int j=0;j<i;j++)
			{
				if(strcmp(b[i],b[j])==0) goto next;
			}
			int dem=1;
			for(int j=i+1;j<n;j++)
			{
				if(strcmp(b[i],b[j])==0) dem++;
			}
			printf("%s %d %d\n",b[i],strlen(b[i]),dem);
			next: continue;
		}
	}
}