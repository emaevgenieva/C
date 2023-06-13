// Напишете функция, която приема два масива от цели числа с
// еднакъв размер и разменя стойностите на елементите им
#include<stdio.h>

void swap(int* arr1, int size, int* arr2){
    //int temp = 0;
    for(int i=0; i<size; i++){
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

void printAray(int* array, int size){
    for(int i=0; i<size; i++){
        printf(" %d ", array[i]);
    }
}

int main(){
    int arr1[]={1,2,5,6};
    int arr2[]={7,8,10,-4};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    
    printf("Before the changing the second array looks like: ");
    printAray(arr2,size);

    printf("\nAfter the changing the second array looks like: ");
    swap(arr1, size, arr2);
    printAray(arr2,size);
}
