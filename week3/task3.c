// Напишете функция, която проверява дали дадена float матрица 
// identity matrix -матрица с размер (N x N),
// където само елементите в главния диагонал са единици,
// а всички останали елементи са нули.
#include<stdio.h>
#include<stdbool.h>
#define SIZE 3
bool isIdentical(const float matrix[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(matrix[i][j] == 1.0f && matrix[i][j+1] == 0.0f){
                return true;
            }
            else{
                return false;
            }
        }
    }
}
void printMatrix(float matrix[SIZE][SIZE], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf(" %.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    float matrix[3][3]={{1.0f,1.0f,0.0f},{0.0f,1.0f,0.0f},{0.0f,0.0f,1.0f}};
    printMatrix(matrix,3,3);
    if(isIdentical(matrix)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
