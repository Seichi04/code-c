#include<stdio.h>
int main()
{
	long long a=0;scanf("%lld",&a);
	int dem2=0,dem3=0,dem5=0,dem7=0;
	while(a!=0)
	{
		int b=a%10;
		switch(b)
		{
			case 2: dem2++;break;
			case 3: dem3++;break;
			case 5: dem5++;break;
			case 7: dem7++;break;
			default: break;
		}
		a/=10;
	}
	if(dem2!=0) printf("2 %d\n",dem2);
	if(dem3!=0) printf("3 %d\n",dem3);
	if(dem5!=0) printf("5 %d\n",dem5);
	if(dem7!=0) printf("7 %d\n",dem7);
}