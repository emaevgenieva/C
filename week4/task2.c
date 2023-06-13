#include<stdio.h>
#include<stdlib.h>

// Напишете програма, която запълва масив от 20 елемента с произволно
// избрани цели числа. За целта използвайте функцията rand(). Въведете
// едно цяло число от клавиатурата. Проверете дали въведеното число от
// клавиатурата е намерено в масива. Принтирайте масива и отговора дали
// числото е намерено в масива.


int main(){
    int arr[21];
    int number = 0;
    for(int i=0; i<20; i++){
        arr[i] = rand();
        //printf("%d, ", arr[i]);
    }
    
    printf("\nEnter the number: ");
    scanf("%d", &number);

    for(int i=0; i<20; i++){
        if(arr[i] == number){
            printf("It's a match!");
            //printf("%d, ", arr[i]);
            break;
        }
        else{
             printf("Sorry.\n");
        }
    }
    for(int i=0; i<20; i++){
        printf("%d, ",arr[i]);
     }
}
