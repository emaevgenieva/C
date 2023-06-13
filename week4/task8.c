// Напишете програма, която да отделя в два отделни масива четните и
// нечетните числа от даден масив с цели числа. Масива да бъде въведен
// от клавиатурата. Принтирайте оригиналния и двата резултатни масива
#include<stdio.h>

void evenNumbersArray(int arr1[], int size){
    for(int i=0; i<size; i++){
        if(arr1[i] % 2 == 0){
            printf(" %d ",arr1[i]);
        }
    }
}
void oddNumbersArray(int arr2[], int size){
    for(int i=0; i<size; i++){
        if(arr2[i] % 2 != 0){
            printf(" %d ",arr2[i]);
        }
    }
}

int main(){
    int arr[100];
    int n = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the array of integers: ");
    for(int i=0;i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
    printf("Even numbers are: ");
    evenNumbersArray(arr,n);
    printf("\n");
    printf("Odd numbers are: ");
    oddNumbersArray(arr,n);
}
