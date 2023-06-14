#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int binary_search(const char * const *arr, int size, const char *target, int (*cmp)(const char*, const char*)) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
      int mid = (low + high) / 2;
      int cmp_result = cmp(arr[mid], target);

      if (cmp_result == 0) {
        return mid;
      } 
      else if (cmp_result < 0) {
        low = mid + 1;
      } 
      else {
        high = mid - 1;
      }
    }

    return -1;
}

int main() {
    const char *arr[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int size = sizeof(arr) / sizeof(arr[0]);
    const char *target = "cherry";

    int result = binary_search(arr, size, target, (int (*)(const char*, const char*))strcmp);

    if (result == -1) {
      printf("String not found in array\n");
    } 
    else {
      printf("String found at index %d\n", result);
    }

    return 0;
}
