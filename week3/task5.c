// Напишете функция, която умножава всеки елемент на 3x3 float матрица с float
// число.
#include<stdio.h>
#include<stdbool.h>

void matrixMultiplication(float matrix[3][3], float number){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix[i][j] = matrix[i][j] * number;
        }
    }
}

void printMatrix(float matrix[3][3]){
    for(int rows=0; rows<3; rows++){
        for(int cols=0; cols<3; cols++){
            printf(" %.2f ", matrix[rows][cols]);
        }
        printf("\n");
    }
}

int main(){
    float matrix[3][3]={{1.1f,1.2f,1.3f},{1.4f,4.7f,3.3f},{3.3f,2.1f,2.2f}};
    matrixMultiplication(matrix,1.5f);
    printMatrix(matrix);
}
