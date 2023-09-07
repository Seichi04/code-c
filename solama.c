#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int chuyen(char a)
{
	switch(a)
	{
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
	}
}
int main()
{
	int t=0;scanf("%d",&t);
	getchar();
	for(int k=0;k<t;k++)
	{
		char a[100];
		gets(a);
		int n=strlen(a);
		int b[n+1];
		for(int i=0;i<n;i++)
		{
			if(a[i]=='I' || a[i]=='V') b[i]=0;
			else if(a[i]=='X' || a[i]== 'L') b[i]=1;
			else if(a[i]=='C' || a[i]== 'D') b[i]=2;
			else b[i]=3;
		}
		b[n]=0;
		int so=0;
		for(int i=0;i<n;i++)
		{
			if(b[i+1]>b[i])
			{
				so+=(chuyen(a[i+1])-chuyen(a[i]));
				i++;
			}
			else if(b[i+1]=b[i] && chuyen(a[i+1]) >chuyen(a[i]))
			{
				so+=(chuyen(a[i+1])-chuyen(a[i]));
				i++;
			}
			else
			{
				so+=chuyen(a[i]);
			}
		}
		printf("%d\n",so);
	}
}