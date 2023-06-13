// Напишете функция, която изчислява средното аритметично на
// елементите на масив от int
#include<stdio.h>

double average(int* arr, int size){
    double sum = 0.0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum/size;
}

int main(){
    int arr[]={1,2,5,4,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    double result = average(arr,size);
    printf("%.2f",result);
}
