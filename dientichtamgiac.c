#include"stdio.h" 
#include"math.h" 
double tam_giac( double x1, double y1, double x2, double y2, double x3, double y3)
{ 
	double a,b,c; 
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)); 
	b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)); 
	c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)); 
	if(a+b<c||a+c<b||b+c<a){ return 0; } 
	double s=(sqrt((a+b+c)*(a+b-c)*(-a+b+c)*(a-b+c)))/4; 
	return s; 
} 
int main()
{ 
	int t; 
	scanf("%d",&t); 
	while(t--)
	{ 
		double x1,y1,x2,y2,x3,y3; 
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3); 
		if(tam_giac(x1,y1,x2,y2,x3,y3)==0){ printf("INVALID\n"); } 
		else{ printf("%0.2lf\n",tam_giac(x1,y1,x2,y2,x3,y3)); } 
	} 
	return 0; 
}