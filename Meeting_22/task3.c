#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_function(const void *a, const void *b) {
    return strcmp(*(char **)a, *(char **)b);
}

int main(){

    char* array[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int n = sizeof(array) / sizeof(array[0]);

    qsort(array, n, sizeof(char *), compare_function);

    char* key = "cherry";
    char** result = bsearch(&key, array, n, sizeof(char *), compare_function);

    if (result) {
        printf("String '%s' found in array\n", *result);
    } else {
        printf("String '%s' not found in array\n", key);
    }

    return 0;
}
