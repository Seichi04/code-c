#include<stdio.h>
#include<string.h>
void tachxau(char A[101][101],char a[101],int *h)
{
	char *token;
	token=strtok(a," ");
	while(token!=NULL)
	{
		strcpy(A[(*h)++],token);
		token=strtok(NULL," ");
	}
}
int main()
{
	char a[101],b[101];
	gets(a);gets(b);
	char A[101][101],B[101][101],C[101][101];
	int h=0,k=0,l=0;
	tachxau(A,a,&h);
	tachxau(B,b,&k);
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(strcmp(A[i],A[j])==0) goto next;
		}
		for(int j=0;j<k;j++)
		{
			if(strcmp(A[i],B[j])==0) goto next;
		}
		strcpy(C[l],A[i]);
		l++;
		next: continue;
	}
	for(int i=0;i<l;i++)
	{
		char min=i;
		for(int j=i+1;j<l;j++)
		{
			if(strcmp(C[j],C[i])<0) min=j;
		}
		char temp[101];
		strcpy(temp,C[i]);
		strcpy(C[i],C[min]);
		strcpy(C[min],temp);
	}
	for(int i=0;i<l;i++)
	{
		printf("%s ",C[i]);
	}
}