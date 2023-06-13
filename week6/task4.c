// Напишете функция, която принтира елементите на масив от int в следния формат:
// [0][1][2][-1][1000][30][-70][1]
#include<stdio.h>
void printAray(int* array, int size){
    for(int i=0; i<size; i++){
        printf("[%d]", array[i]);
    }
}

int main(){
    int array[]={0,1,2,-1,100,30,-70,1};
    int size = sizeof(array)/sizeof(array[0]);
    printAray(array,size);
}
