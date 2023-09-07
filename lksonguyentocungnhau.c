#include<stdio.h>
int UCLN(int a,int b)
{
	while(a!=b)
	{
		if(b>a) b=b-a;
		else a=a-b;
	}
	return a;
}
int main()
{
	int a,b; scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		for(int j=i+1;j<=b;j++)
		{
			if(UCLN(i,j)==1) printf("(%d,%d)\n",i,j);
		}
	}
}