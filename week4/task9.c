// Напишете програма, която да завърти даден масив от цели числа с
// N позиции наляво. Масива и числото N трябва да бъдат въведени
// от клавиатурата. Принтирайте оригиналния и резултатния масиви.
// Пример:
#include<stdio.h>

//swap elements of array
void swap(int* arr, int start, int end){
    int temp = 0;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

//rotation
void leftRotate(int* arr, int positions, int size){
    if(positions>size){
        printf("Invalid positions");
        return;
    }
    else{
        positions = positions % size;
        swap(arr,0,positions-1);
        swap(arr,positions, size-1);
        swap(arr,0,size-1);
    }
    
}

//print array
void printArray(int* arr, int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    //input the number of integers
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    //input the integers
    printf("Enter the array of numbers: ");
    int arr[100];
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
    }

    //input the rotation steps
    printf("Enter the count of rotation steps: ");
    int positions=0;
    scanf("%d", &positions);

    //final result
    leftRotate(arr,positions,size);
    printArray(arr,size);
    // for(int i=0; i<size; i++){
    //     printf(" %d ",arr[i]);
    // }
}
