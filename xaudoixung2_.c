#include<stdio.h>
#include<string.h>
int main()
{
	char a[100001];
	gets(a);
	int x=strlen(a)-1;
	printf("%d",x);
	return 0;
}
