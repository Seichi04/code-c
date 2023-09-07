#include<stdio.h>
int main()
{
	long a,b;
	scanf("%ld %ld",&a,&b);
	printf("%ld\n %ld\n %ld\n %ld\n %ld\n %0.2lf\n",a+b,a-b,a*b,a/b,a%b,(float)a/b);
}