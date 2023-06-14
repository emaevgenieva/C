#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (*CompareFunc)(const char *, const char *);

void sort_array(char *array[], int n, CompareFunc compare) {
    qsort(array, n, sizeof(char *), (int (*)(const void*, const void*))compare);
}

int compare_by_string_length(const char *a, const char *b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    return len_a - len_b;
}

int main() {
    char *array[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");

    sort_array(array, n, compare_by_string_length);

    printf("Sorted by string length: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");

    return 0;
}
