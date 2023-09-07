#include<stdio.h>
#include<string.h>
int main()
{
	char a[200];
	gets(a);
	int b=strlen(a);
	int countalphabet=0;
	int countnumber=0;
	int countchar=0;
	for(int i=0;i<b;i++)
	{
		if(((int)a[i]>=65 && (int)a[i]<91)||((int)a[i]>=97 && (int)a[i]<123)) countalphabet++;
		else if((int)a[i]>=48 && (int)a[i]<58) countnumber++;
		else countchar++;
	}
	printf("%d %d %d",countalphabet,countnumber,countchar);	
}