#include<stdio.h> 
#include<math.h> 
int main()
{ 
	int t; 
	scanf("%d",&t); 
	while(t--)
	{ 
		float xa,ya,xb,yb,xc,yc,AB,AC,BC,P; 
		scanf("%f %f %f %f %f %f",&xa,&ya,&xb,&yb,&xc,&yc); 
		AB=sqrt((pow(xb-xa,2))+(pow(yb-ya,2))); 
		AC=sqrt((pow(xc-xa,2))+(pow(yc-ya,2))); 
		BC=sqrt((pow(xc-xb,2))+(pow(yc-yb,2))); 
		if(AB+AC>BC&&AB+BC>AC&&AC+BC>AC){ P=AB+AC+BC; printf("%.3f\n",P); } 
		else printf("INVALID\n"); 
	} 
}