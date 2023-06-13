// Напишете функция, която копира стойностите на елементите на
// един масив в елементите на друг.
#include<stdio.h>
void inputArray(int* arr, int size){
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
}

void copy(int* array1, int size, int* array2){
    for(int i=0; i<size; i++){
        array2[i]  = array1[i];
    }
}
void printAray(int* array, int size){
    for(int i=0; i<size; i++){
        printf(" %d ", array[i]);
    }
}

int main(){
    int arr1[100];
    int size =0;
    printf("Enter the number of integers: ");
    scanf("%d",&size);

    printf("The first array is: ");
    inputArray(arr1,size);

    int arr2[100];
    copy(arr1,size,arr2);
    printf("The second aray is: ");
    printAray(arr2,size);
}
