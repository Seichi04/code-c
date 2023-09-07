#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **str1_ptr, char **str2_ptr)
{
char *temp = *str1_ptr;
*str1_ptr = *str2_ptr;
*str2_ptr = temp;
}


int lexicographic_sort(const char* a, const char* b) 
{
	if(strcmp(a,b)>0) return 1;
	return 0;
}

int lexicographic_sort_reverse(const char* a, const char* b) 
{
	if(strcmp(a,b)<0) return 1;
	return 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) 
{
	int counta=0,countb=0;
	for(int i=1;i<strlen(a);i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				counta++;
				break;
			}
		}
	}
	for(int i=1;i<strlen(b);i++)
	{
		for(int j=0;j<i;j++)
		{
			if(b[i]==b[j])
			{
				countb++;
				break;
			}
		}
	}
	if(strlen(a)-counta > strlen(b)-countb ) return 1;
	else if(strlen(a)-counta == strlen(b)-countb && strcmp(a,b)>0) return 1;
	return 0;
}

int sort_by_length(const char* a, const char* b) 
{
	if(strlen(a)>strlen(b)) return 1;
	else if(strlen(a)==strlen(b) && strcmp(a,b)>0) return 1;
	return 0;
}


void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b))
{
	int count=0;
	do
	{
		count=0;
		for(int j=0;j<len-1;j++)
		{
			
			if((*cmp_func)(arr[j],arr[j+1])==1) 
			{
				
				swap(&arr[j],&arr[j+1]);
				count++;
			}
		}
	} while(count!=0);
	
}


int main() 
{
    int n=0;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  	
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}