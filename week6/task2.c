// Напишете функция, която изчислява произведението на
// елементите на масив от int.

#include<stdio.h>
int productOfNumbers(int* arr, int size){
    int product = 1;
    for(int i=0; i<size; i++){
        product = product*arr[i];
    }
    return product;
}

int main(){
    int arr[]={1,2,6,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = productOfNumbers(arr,size);
    printf("The result is: %d",result);
}
