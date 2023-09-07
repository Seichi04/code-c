#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char a[500];
	gets(a);
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		a[i]=tolower(a[i]);
	}
	char b[500][500];
	char *token;
	int h=0;
	token=strtok(a," ");
	while(token != NULL)
	{
		strcpy(b[h],token);
		h++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<h;i++)
	{
		int dem=1;
		if(strcmp(b[i]," ")!=0)
		{
			for(int j=i+1;j<h;j++)
			{
				if(strcmp(b[i],b[j])==0) 
				{
					dem++;
					strcpy(b[j]," ");
				}
			}
			printf("%s %d\n",b[i],dem);
		}
	}
}