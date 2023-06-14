#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int n; // number of elements of the array
    int sum = 0; // temporary variable for the sum
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); 

    int* array = malloc(n * sizeof(int));//(dynamically) alocate memory for array of n-elements
    if(array == NULL){
        printf("Error! Memory allocatio failed\n");
        return 1;
    }

    printf("Enter the elements of the array: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("The sum of all elements in the array is: %d \n", sum);

    free(array);//free memory
    return 0;
}
