// Напишете функция, която ограничава стойностите на елементите
// на масив от цели числа в подаден интервал [min, max]
#include <stdio.h>
void clamp(int* arr, int size, int min, int max){
    for(int i=0; i<size; i++){
        if(arr[i] < min){
            arr[i] = min;
        }
        else if(arr[i] > max){
            arr[i] = max;
        }
    }
}
void printAray(int* array, int size){
    for(int i=0; i<size; i++){
        printf(" %d ", array[i]);
    }
}

int main(){
    int arr[]={1,2,12,-4,54};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = -1;
    int max = 52;
    clamp(arr,size, min, max);
    printAray(arr,size);
}
