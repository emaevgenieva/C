// Напишете програма, която да брои колко пъти се среща едно число в даден
// масив от цели числа. Масивът и числото трябва да бъдат въведени от
// клавиатурата. Принтирайте резултатите.
#include<stdio.h>

int main(){
    printf("Enter the count of the numbers in array: ");
    int size =0;
    scanf("%d", &size);
    int arr[100];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int counter = 0;
    int number = 0;
    printf("We are looking for 7: ");
    scanf("%d", &number);
    for(int i=0; i<size;i++){
        if(arr[i] == number){
            counter++;
            //printf("%d",counter);
        }
    }
    printf("%d",counter);
}
