#include<stdio.h>
#include<math.h>
int main()
{
	char a[100];
	gets(a);
	char b[100][20];
	char *token;
	token=strtok(a," ");
	int count=0;
	while(token!=NULL)
	{
		strcpy(b[count],token);
		b[count][strlen(b[count])]='\0';
		count++;
		token=strtok(NULL," ");
	}
	for(int i=0;i<count;i++)
	{
		printf("%s\n",b[i]);
	}
}