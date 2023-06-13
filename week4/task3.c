#include<stdio.h>
// Напишете програма, която запълва масив от 20 елемента с произволно
// избрани стойности. За целта използвайте функцията rand(). Намерете най-
// голямото число в масива. Принтирайте намереното число и масива.

int main(){
    int arr[21];
    for(int i=0; i<20; i++){
        arr[i] = rand();
        //printf("%d, ", arr[i]);
    }
    int max = 0;
    for(int i=0; i<20;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The array of integers: ");
    for(int i=0; i<20; i++){
        printf(" %d ",arr[i]);
    } 
    printf("\nThe max is: %d ", max);
}
