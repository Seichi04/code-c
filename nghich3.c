#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int lexicographic_sort(const char *a, const char *b) {
    if (strcmp(a, b) > 0)
        return 1;
    return 0;
}

int lexicographic_sort_reverse(const char *a, const char *b) {
    if (strcmp(a, b) < 0)
        return 1;
    return 0;
}

int sort_by_number_of_distinct_characters(const char *a, const char *b) {
    int min = (strlen(a) < strlen(b)) ? (strlen(a)) : (strlen(b));
    int count = 0;
    for (int i = 0; i < min; i++) {
        if (a[i] == b[i])
            count++;
    }
    if ((strlen(a) - count) > (strlen(b) - count))
        return 1;
    return 0;
}

int sort_by_length(const char* a, const char* b) 
{
	if(strlen(a)>strlen(b)) return 1;
	return 0;
}

void string_sort(char **arr, const int len, int (*cmp_func)(const char *a, const char *b)) {
    int count = 0;
    do {
        count = 0;
        for (int j = 0; j < len - 1; j++) {
            if ((*cmp_func)(arr[j], arr[j + 1]) == 1) {
                swap(&arr[j], &arr[j + 1]);
                count++;
            }
        }
    } while (count != 0);
}

int main() {
    int n;
    scanf("%d", &n);

    char **arr;
    arr = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++) {
        arr[i] = malloc(1024 * sizeof(char));
        scanf("%s", arr[i]);
    }

    string_sort(arr, n, lexicographic_sort);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    for (int i = 0; i < n; i++)
        free(arr[i]);
    free(arr);

    return 0;
}
