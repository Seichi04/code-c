#include<stdio.h>
#include<string.h>
#include<ctype.h>
void tachxau(char A[201][201],char a[201],int *h)
{
	char *token;
	token=strtok(a," ");
	while(token!=NULL)
	{
		strcpy(A[(*h)++],token);
		token=strtok(NULL," ");
	}
}
void chuyendang(char a[201],int n)
{
	for(int i=0;i<n;i++)
	{
		a[i]=tolower(a[i]);
	}
}
int check(char A[201],char b[21])
{
	int n=strlen(A);
	int m=strlen(b);
	char X[201],y[21];
	strcpy(X,A);
	strcpy(y,b);
	if(m!=n) return 0;
	chuyendang(X,n);
	chuyendang(y,m);
	if(strcmp(X,y)==0) return 1;
	else return 0;
}
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	for(int n=0;n<t;n++)
	{
		char a[201],b[21];
		gets(a);gets(b);
		char A[201][201];
		int h=0;
		tachxau(A,a,&h);
		printf("Test %d: ",n+1);
		for(int i=0;i<h;i++)
		{
			if(check(A[i],b)!=1) printf("%s ",A[i]);
			
		}
		printf("\n");
	}
	
}