// Напишете функция, която запълва масив от цели числа с въведени от потребителя
// стойности
// ● Ползвайте функциите от горните три задачи за тестване с примерни стойности в
// тестовите функции
#include <stdio.h>
void inputArray(int* arr, int size){
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
}
void printAray(int* array, int size){
    for(int i=0; i<size; i++){
        printf("[%d]", array[i]);
    }
}

int main(){
    int number = 0;
    printf("Enter the number of integers: ");
    scanf("%d",&number);
    int arr[100];
    inputArray(arr,number);
    printAray(arr,number);
}
