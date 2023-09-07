#include<stdio.h>
int main()
{
	float a,b;//ax+b=0
	scanf("%f %f", &a, &b);
	if (a==0)
		{
			if(b==0) printf("Vo so nghiem");
			else printf("Vo nghiem");
		}
	else printf("%0.2f", -b/a);
	
}