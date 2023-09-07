#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0;scanf("%d",&a);
	char b[11];
	int count=0;
	if(a==0) printf("0");
	else
	{
		while(a!=0)
		{
			b[count++]=(char)(a%2+48);
			a/=2;
		}
		for(int i=count-1;i>=0;i--)
		{
			printf("%c",b[i]);
		}
	}
		
}