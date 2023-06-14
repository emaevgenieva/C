#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int (*CompareFunc)(const char *, const char *);

void sort_array(char *array[], int n, CompareFunc compare) {
    qsort(array, n, sizeof(char *), (int (*)(const void*, const void*))compare);
}

int compare_lexicographic(const char *a, const char *b) {
    return strcmp(a, b);
}

int compare_reverse_lexicographic(const char *a, const char *b) {
    return strcmp(b, a);
}

int main() {
    char *array[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");

    sort_array(array, n, compare_lexicographic);

    printf("Sorted lexicographically: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");

    sort_array(array, n, compare_reverse_lexicographic);

    printf("Sorted reverse lexicographically: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");

    return 0;
}
