// Напишете програма, която проверява дали две дадени матрици от float са еднакви,
// сравнявайки съответните елементи в тях. Разпечатайте в конзолата двете изходни
// матрици и резултата от сравнението.

//ПОПРАВКА НА ЗАДАЧАТА

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#define ROWS 12
#define COLS 12
//probno
// bool areMatricesIdentical(float matrix1[][COLS], int rows1, int cols1, float matrix2[][COLS], int rows2, int cols2){
//     float epsilon = 0.01f;
//     int flag = 1;
//     if(rows1 == rows2 && cols1 == cols2){
//         printf("Matrices can be compared!\n");
//         for(int i=0; i<rows1; i++){
//             for(int j=0; j<cols2; j++){
//                 if(fabs(matrix1[i][j] -matrix2[i][j])<epsilon){//AKO ПЪРВИТЕ ЕЛ-ТИ СА РАЗЛИЧНИ- СПИРА ПРОВЕРКАТА
//                     flag = 0;
//                     break;
//                 }
//             }
//         }
//     }
//     else{
//         printf("Matrices cannot be compared. \n");
        
//     }
//     if(flag == 1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }



bool areMatricesIdentical(float matrix1[][COLS], int rows1, int cols1, float matrix2[][COLS]){

    printf("Matrices can be compared!\n");
        for(int i=0; i<rows1; i++){
            for(int j=0; j<cols1; j++){
                if(matrix1[i][j] != matrix2[i][j]){//AKO ПЪРВИТЕ ЕЛ-ТИ СА РАЗЛИЧНИ- СПИРА ПРОВЕРКАТА
                    return false;
                }
            }
        }
    
    return true;
}

//print matrix
void printMatrix(float matrix[][COLS],int rows, int cols){
    
    for(int i=0; i<rows;i++){
        for(int j=0; j<cols; j++){
            printf(" %.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    float matrix1[3][3]={{1.3f,1.3f,1.3f},{2.3f,2.3f,2.3f},{4.3f,4.3f,4.3f}};
    float matrix2[3][3]={{1.3f,7.3f,1.3f},{2.3f,2.3f,2.3f},{4.3f,4.3f,4.3f}};
    float matrix3[3][3]={{1.12f,1.12f,1.12f},{1.12f,1.12f,1.12f},{1.12f,1.12f,1.12f}};
    float matrix4[2][3]={{1.12f,1.12f,1.12f},{1.12f,1.12f,1.12f}};

    printf("The first matrix is: \n");
    printMatrix(matrix1,3,3);
    printf("\n");
    printf("The second matrix is: \n");
    printMatrix(matrix2,3,3);

    printf("\nAre the first and second matrices identical? --> ");
    
    if(areMatricesIdentical(matrix1,3,3,matrix2,3,3)){
        printf("They are identical!\n");
    }
    else{
        printf("They aren't identical!\n");
    }
    
    printf("\n");
    printf("The third matrix is: \n");
    printMatrix(matrix3,3,3);

    printf("The fourth matrix is: \n");
    printMatrix(matrix4,2,3);

    printf("\nAre the third and fourth matrices identical? -->");

    if(areMatricesIdentical(matrix3,3,3,matrix4,2,3)){
        printf("They are identical!\n");
    }
    else{
        printf("They aren't identical!\n");
    }
}
