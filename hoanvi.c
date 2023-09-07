#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int n,char **s,int min1,int min2)
{
    char *temp= calloc(11,sizeof(char));
    strcpy(temp,s[min2]);
    strcpy(s[min2],s[min1]);
    strcpy(s[min1],temp);
    for(int i=min1+1;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(s[j],s[min])<0) min=j;
        }
        if( min!=i )
        {
            char *temp1= calloc(11,sizeof(char));
            strcpy(temp1,s[i]);
            strcpy(s[i],s[min]);
            strcpy(s[min],temp1);
        }
    }
}

int next_permutation(int n, char **s)
{
    int check=0;
    for(int i=n-2;i>=0;i--)
    {
        int min1=i,min2=i+1;
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(s[j],s[min1])>0 && strcmp(s[j],s[min2])<0) min2=j; 
        }
        if(strcmp(s[min2],s[min1])>0) 
        {
            swap(n,s,min1,min2);
           return 1;
        } 
        
    }
    return 0;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	
    for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	
    do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	
    for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}