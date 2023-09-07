#include<stdio.h> 
#include<math.h> 
int main()
{ 
	int m,n; 
	scanf("%d %d",&m,&n);  
	int a;
	if((int)sqrt(m)*(int)sqrt(m)<m) a = (int)sqrt(m)+1;
	else a=sqrt(m); 
	float b = (float)sqrt(n);
	int dem= (int)b-(int)a+1;
	printf("%d\n",dem); 
	for(int i=a;i<b;i++)
	{
		printf("%d\n",i*i);
	}
}