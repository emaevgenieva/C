// Напишете функция, която занулява всички отрицателни стойности
// на елементите на масив от цели числа
#include<stdio.h>
void zeroTransform(int* arr, int size){
    for(int i=0; i<size; i++){
        if(arr[i] < 0){
            arr[i] = 0;
        }
    }
}
void printAray(int* array, int size){
    for(int i=0; i<size; i++){
        printf(" %d ", array[i]);
    }
}

int main(){
    int arr[]={-7, 12, -45, 4, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    zeroTransform(arr,size);
    printAray(arr,size);
}
