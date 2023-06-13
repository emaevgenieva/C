// Напишете програма, която принтира уникалните елементи от масив с цели
// числа, въведени от клавиатурата.

#include <stdio.h>

int main(){
    printf("Enter the elements of the array: ");
    
    int size = 0;
    scanf("%d", &size);
    
    int arrayOfIntegers[100];
    for(int i=0; i<size; i++){
        scanf("%d", &arrayOfIntegers[i]);
    }
    
    int counter = 0;
    for(int i=0; i<size; i++){
        for(int j=0; j<i; j++){
            if(arrayOfIntegers[i] == arrayOfIntegers[j]){
                break;
            }
            if(i == j){
                printf("%d, ",counter, arrayOfIntegers[i]);
                ++counter;
            }
        }
    }
}
