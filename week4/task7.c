// Напишете програма, която да намери максималния и минималния
// елемент в масив от цели числа. Масива трябва да бъде въведен от
// клавиатурата. Принтирайте целия масив и резултатите.
#include<stdio.h>

int main(){
    printf("Please enter the size of the array: ");
    int size = 0;
    scanf("%d",&size);

    int arrayOfIntegers[100];
    for(int i=0; i<size; i++){
        scanf("%d", &arrayOfIntegers[i]);
    }
    int min = 0;
    int max = 0;

    for(int i=0; i<size; i++){
        if(arrayOfIntegers[i] < min){
            min = arrayOfIntegers[i];
        }
        else if(arrayOfIntegers[i] > max){
            max = arrayOfIntegers[i];
        }
    }
    printf("The minimal element of the array is: %d\n", min);
    printf("The maximal element of the array is: %d\n", max);
}
