#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[50];
	gets(a);
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		a[i]=tolower(a[i]);
	}
	char b[50][50];
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
		if(i==(h-1)) printf("%s",b[i]);
		else printf("%c",b[i][0]);
	}
	printf("@ptit.edu.vn");
}