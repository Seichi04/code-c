#include<stdio.h>
int main()
{
	int x1,y1,x2,y2,a1,b1,a2,b2;
	scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&a1,&b1,&a2,&b2);
	int k1,h1,k2,h2;
	k1=(x1<=a1)?(x1):(a1);
	h1=(y1<=b1)?(y1):(b1);
	k2=(x2>=a2)?(x2):(a2);
	h2=(y2>=b2)?(y2):(b2);
	printf("%d",((k2-k1)>(h2-h1)?((k2-k1)*(k2-k1)):((h2-h1)*(h2-h1))));
}