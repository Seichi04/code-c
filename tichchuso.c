#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int tich=1;
	while(a>=10)
	{
		tich*=a%10;
		a/=10;
	}
	if(a!=0) tich*=a;
	printf("%d",tich);
}