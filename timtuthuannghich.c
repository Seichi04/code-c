#include<stdio.h>
#include<string.h>
int checktn(char a[])
{
	int n=strlen(a);
	for(int i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-i-1]) return 0;
	}
	return 1;
}
int main()
{
	char a[50000];
	gets(a);
	char b[1000][50];
	int c[1000],d[1000];
	int count=0,max=0;;
	char *token;
	token=strtok(a," ");
	while(token!=NULL)
	{
		strcpy(b[count],token);
		b[count][strlen(b[count])]='\0';
		if(checktn(b[count])==1) 
		{
			c[count]=strlen(b[count]);
			if(c[count]>max) max=c[count];
			d[count]=1;
			for(int i=0;i<count;i++)
			{
				if(strcmp(b[count],b[i])==0) 
				{
					d[count]++;
					d[i]=0;
				}
			}
		}
		else 
		{
			c[count]=0;
			d[count]=0;
		}
		count++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<count;i++)
	{
		if(c[i]==max && d[i]!=0) printf("%s %d",b[i],d[i]);
	}
	
}