#include<stdio.h>
#include<string.h>
int main()
{
	char a[11];
	gets(a);
	int x=strlen(a);
	int dem2=0,dem3=0,dem5=0,dem7=0;
	for(int i=0;i<x;i++)
	{
		int b=(int)a[i]-48;
		switch(b)
		{
			case 2: dem2++;break;
			case 3: dem3++;break;
			case 5: dem5++;break;
			case 7: dem7++;break;
			default: break;
		}
	}
	int dem2_=0,dem3_=0,dem5_=0,dem7_=0;
	for(int i=0;i<x;i++)
	{
		int b=(int)a[i]-48;
		if(b==2 && dem2_==0){printf("2 %d\n",dem2);dem2_++;} 
		if(b==3 && dem3_==0){printf("3 %d\n",dem3);dem3_++;}
		if(b==5 && dem5_==0){printf("5 %d\n",dem5);dem5_++;}
		if(b==7 && dem7_==0){printf("7 %d\n",dem7);dem7_++;}
	}
	
		
}