#include <stdlib.h>
#include <string.h>
#include <stdio.h>



// Comparison function for ints
int int_cmp(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}


// Comparison function for char
int char_cmp(const void* a, const void* b) {
    char x = *(char*)a;
    char y = *(char*)b;
    if (x < y) return 1;
    if (x > y) return -1;
    return 0;
}

int compare_strings(const void* a, const void* b) {
    const char** x = (const char**)a;
    const char** y = (const char**)b;
    return strcmp(*x, *y);
}

int compare_unsigned_longs(const void* a, const void* b) {
    unsigned long x = *(unsigned long*)a;
    unsigned long y = *(unsigned long*)b;
    if (x % 2 == 0 && y % 2 == 1) {
        return -1;
    } else if (x % 2 == 1 && y % 2 == 0) {
        return 1;
    } else if (x > y) {
        return -1;
    } else if (x < y) {
        return 1;
    } else {
        return 0;
    }
}


int main() {
    //point 1
    int array[] = {3, 2, 5, 1, 4};
    int n = sizeof(array) / sizeof(int);
    qsort(array, n, sizeof(int), int_cmp);// Sort the array in ascending order

    for(int i = 0; i < n; i++) { // Print the sorted array
        printf("%d ", array[i]);
    }
    printf("\n");

    //----------------------------------------------------------------------------
    //point 2
    char array1[] = {'c', 'b', 'e', 'a', 'd'};
    int n1 = sizeof(array1) / sizeof(char);

    qsort(array1, n1, sizeof(char), char_cmp);// Sort the array in descending order
    for (int i = 0; i < n; i++) {// Print the sorted array
        printf("%c ", array[i]);
    }
    printf("\n");


    //-------------------------------------------------------------------------------
    //point 3
    const char* arr2[] = {"apple", "banana", "cherry"};
    int arr_size = sizeof(arr2) / sizeof(arr2[0]);
    qsort(arr2, arr_size, sizeof(const char*), compare_strings);

    // arr is now sorted lexicographically
    for (int i = 0; i < arr_size; i++) {
        printf("%s ", arr2[i]);
    }
    printf("\n");

    //------------------------------------------------------------------------------------
    //point 4
    int array4[] = {4, 2, 6, 1, 7, 5, 3, 9, 8, 0};
    int len_arr = sizeof(array4) / sizeof(array4[0]);
    qsort(array4,len_arr, sizeof(int), compare_unsigned_longs);
    for(int i=0; i< len_arr; i++){
        printf("%d ", array4[i]);
    }
    printf("\n");

    return 0;
}
