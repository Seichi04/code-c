#include<stdio.h>
int main()
{
	int a,nam,ngay,tuan;
	scanf("%d",&a);
	nam = a/365;
	tuan = (a%365)/7;
	ngay = a - nam*365 - tuan *7;
	printf("%d %d %d",nam, tuan, ngay);
}