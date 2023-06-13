// Напишете програма, която проверява дали две дадени матрици от float са еднакви,
// сравнявайки съответните елементи в тях. Разпечатайте в конзолата двете изходни
// матрици и резултата от сравнението.
#include<stdio.h>
#include<stdbool.h>

bool areMatricesIdentical(const float matrix1[3][3], const float matrix2[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(matrix1[i][j] != matrix2[i][j]){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
}

//print matrix
void printMatrix(float matrix[3][3]){
    for(int rows=0; rows<3; rows++){
        for(int cols=0; cols<3; cols++){
            printf(" %.2f ", matrix[rows][cols]);
        }
        printf("\n");
    }
}

int main(void){
    float matrix1[3][3]={{1.3f,1.3f,1.3f},{2.3f,2.3f,2.3f},{4.3f,4.3f,4.3f}};
    float matrix2[3][3]={{1.3f,1.3f,1.3f},{2.3f,2.3f,7.3f},{4.3f,4.3f,4.3f}};
    // float matrix3[3][3]={{1.12,1.12,1.12},{1.12,1.12,1.12},{1.12,1.12,1.12}};
    // float matrix4[3][3]={{1.12,1.12,1.12},{1.12,1.12,1.12},{1.12,1.12,1.13}};

    printf("The first matrix is: \n");
    printMatrix(matrix1);

    printf("The second matrix is: \n");
    printMatrix(matrix2);
    
    // printMatrix(matrix3);
    // printMatrix(matrix4);

    printf("Are the two matrices identical? -->");
    if(areMatricesIdentical(matrix1,matrix2)){
        printf("They are identical!");
    }
    else{
        printf("They aren't identical!");
    }
    // if(areMatricesIdentical(matrix3,matrix4)){
    //     printf("yes");
    // }
    // else{
    //     printf("no");
    // }
}
