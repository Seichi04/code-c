#include<stdio.h>
#include<string.h>
int checkuuthe(char a[1001],int n)
{
	int c=0,l=0;
	for(int i=0;i<n;i++)
	{
		if((int)a[i]%2==0) c++;
		else l++;
	}
	if(n%2==0 && c>l) return 1;
	else if(n%2!=0 && l>c) return 1;
	else return 0;
}
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	for(int k=0;k<t;k++)
	{
		char a[1001];
		gets(a);
		int n=strlen(a);
		for(int i=0;i<n;i++)
		{
			if((int)a[i]<48 || (int)a[i]>57 || (int)a[0]==48)
			{
				printf("INVALID\n");
				goto next;
			}
		}
		printf("%s\n",(checkuuthe(a,n)==1)?("YES"):("NO"));
		next: continue;
	}
	
}