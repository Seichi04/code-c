#include<stdio.h>
int main()
{
	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	int min;
	(a<=b)?(min=a):(min=b);
	(min<c)?(min=min):(min=c);
	printf("%d",min);
	
}