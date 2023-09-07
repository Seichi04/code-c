#include<stdio.h> 
#include<string.h>
#include<stdlib.h> 
int main()
{ 
	char a[100001]; 
	gets(a); 
	int n=strlen(a); 
	int k=0; 
	while(k<n)
	{ 
		char max=a[k]; 
		for(int i=k;i<n;i++)
		{ 
			if(a[i]>max)
			{ 
				max=a[i]; k=i; 
			} 
		} 
		for(int i=k;i<n;i++)
		{ 
			if(a[i]==max)
			{ 
				printf("%c",a[i]); 
				k=i+1; 
			} 
		} 
	} 
}