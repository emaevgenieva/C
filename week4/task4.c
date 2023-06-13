// Напишете програма, която приема 10 цели числа от клавиатурата, запазва ги в
// масив и ги принтира в обратен ред.
#include<stdio.h>

int main(){
    int arrayOfIntegers[100];
    printf("Enter the 10 numbers: ");

    for(int i=0; i<11; i++){
        scanf("%d", &arrayOfIntegers[i]);
    }

    for (int i = 10; i >=0; i--){
        printf("%d, ",arrayOfIntegers[i]);
    }
    
}

// int main(){
//     int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//     int end = 9;
//     //int temp = 0;
//     for(int i=0;i<10/2;i++){
//         int temp = arr[i];
//         arr[i]=arr[end];
//         arr[end] = temp;
//         end--;
//     }
//     //printf("Reversed array is: \n");
//     for(int i=0; i<10; i++){
//         printf(" %d ",arr[i]);
//     }
// }
