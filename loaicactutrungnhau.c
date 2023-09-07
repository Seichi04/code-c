#include <stdio.h> 
#include <string.h> 
int main() 
{ 
	char a[100], b[100][100]; 
	int i, j, n = 0; 
	gets(a); 
	char *token = strtok(a, " "); 
	while (token != NULL) 
	{ 
		strcpy(b[n], token); 
		n++; 
		token = strtok(NULL, " "); 
	} 
	for (i = 0; i < (n - 1); i++) 
	{ 
		for (j = (i + 1); j < n; j++) 
		{ 
			if (strcmp(b[j], b[i]) == 0) strcpy(b[j],""); 
		} 
	} 
	for (i = 0; i < n; i++) 
	{ 
		if(strcmp(b[i],"")!=0) printf("%s ", b[i]); 
	} 
	printf("\n"); 
	return 0; 
}