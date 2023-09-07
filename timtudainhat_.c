#include <stdio.h> 
#include <string.h> 
#include<stdlib.h>
int main() 
{ 
	char a[10000];
	char b[1000][10];
	gets(a);
	char *token;
	int n=0,tag[1000][1000];
	/*token=strtok(a," ");
	while(token!=NULL)
	{
		strcpy(b[n],token);
		b[n][strlen(b[n])]='\0';
		n++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++)
	{
		printf("%s\n",b[i]);
	}*/
}