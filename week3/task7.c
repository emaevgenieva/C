// Напишете функция, която умножава две 3x3 float матрици по формулата:
#include<stdio.h>
void matrixMultiplication(const float matrix1[3][3], const float matrix2[3][3], float resultMatrix[3][3]){
    //float sum = 0.0f;
    for(int i=0; i<3; i++){
        float sum = 0.0f;
        for(int j=0; j<3; j++){
            //float sum = 0.0f;
            for(int k=0; k<3; k++){
                sum+=matrix1[i][k] * matrix2[k][j]; 
            }
            resultMatrix[i][j] = sum; 
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

int main(void){
    float matrix1[3][3]={{1.1f,1.2f,1.3f},{1.4f,4.7f,3.3f},{3.3f,2.1f,2.2f}};
    float matrix2[3][3]={{1.3f,1.3f,1.3f},{2.3f,3.3f,6.3f},{0.3f,4.1f,8.4f}};
    float resultMatrix[3][3];
    matrixMultiplication(matrix1,matrix2,resultMatrix);
    printMatrix(resultMatrix);
}
