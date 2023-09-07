#include <stdio.h> 
#include <string.h> 
long long min(char *s)
{
	long long kq = 0; 
	for(int i = 0; i < strlen(s) ;i++) 
	{ 
		if(s[i] == '6') 
		{ 
			kq = kq*10 + 5; 
		} 
		else 
		{ 
			kq = kq*10 + s[i] - '0'; 
		} 
	} 
	return kq; 
} 
long long max(char *s)
{ 
	long long kq = 0; 
	for(int i = 0; i < strlen(s) ;i++) 
	{ 
		if(s[i] == '5') 
		{ 
			kq = kq*10 + 6; 
		} 
		else 
		{ 
			kq = kq*10 + s[i] - '0'; 
		} 
	} 
	return kq; 
} 
int main()
{ 
	int t; scanf("%d",&t); 
	while(t--) 
	{ 
		char a[20] ={}, b[20] = {}; scanf("%s %s",a,b); 
		printf("%lld %lld\n", min(a) + min(b), max(a) + max(b)); 
	} 
}