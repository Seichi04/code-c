#include<stdio.h>
int main()
{
	float a,b,c;// ax^2+bx+c=0
	scanf("%f %f %f",&a,&b,&c);
	float delta= (b*b)-(4*a*c);
	if (delta < 0) printf("NO");
	else 
		{
			if (delta ==0 ) printf("%0.2f",-b/(2*a));
			else
				{
					float x,y;
					x= (-b+ sqrt(delta))/(2*a);
					y= (-b- sqrt(delta))/(2*a);
					printf("%0.2f %0.2f",x,y);
				}
		}
}