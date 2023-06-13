#include<stdio.h>

// Прочетете масив от цели числа от клавиатурата. 
// Копирайте въведения масив във втори масив,
// като умножите стойността на всеки елемент по 2.
// Принтирайте двата масива

int main(){
    int sizeOfArray = 0;
    printf("Enter the number of the elements: ");
    scanf("%d", &sizeOfArray);

    int arrayOfIntegers1[100];
    printf("Please enter the elemnts of the array: ");
    for(int i=0; i < sizeOfArray; i++){
        scanf("%d", &arrayOfIntegers1[i]);
    }
    
    int arrayOfIntegers2[100];
    for(int i=0; i < sizeOfArray; i++){
        arrayOfIntegers2[i] =2 * arrayOfIntegers1[i];
    }
    for (int  i = 0; i < sizeOfArray; i++){
        printf(" %d ", arrayOfIntegers1[i]);
    }
    printf("\n");
    for (int  i = 0; i < sizeOfArray; i++){
        printf(" %d ", arrayOfIntegers2[i]);
    }
}
