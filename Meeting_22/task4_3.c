#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (*CompareFunc)(const char *, const char *);

void sort_array(char *array[], int n, CompareFunc compare) {
    qsort(array, n, sizeof(char *), (int (*)(const void*, const void*))compare);
}

int compare_by_punctuation_count(const char *a, const char *b) {
    int count_a = 0;
    int count_b = 0;
    for (int i = 0; a[i]; i++) {
        if (ispunct(a[i])) count_a++;
    }
    for (int i = 0; b[i]; i++) {
        if (ispunct(b[i])) count_b++;
    }
    return count_a - count_b;
}

int main() {
    char *array[] = {"apple", "banana!", "cherry...", "date", "elderberry?"};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");

    sort_array(array, n, compare_by_punctuation_count);

    printf("Sorted by punctuation count: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");

    return 0;
}
