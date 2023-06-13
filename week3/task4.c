// Напишете функция, която размерня два реда на матрица, по подадени аргументи за
// индекси на редовете, които да се разменят.
// Напишете функция, която разменя две колони на матрица, по подадени аргументи за
// индекси на колоните, които да се разменят.
#include<stdio.h>

//INPUT MATRIX
void inputMatrix(int matrix[10][10], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}
//SWAP TWO ROWS
void swapMatrixRows(int matrix[10][10], int rows, int cols, int rowIndex1, int rowIndex2){
    for(int i=0; i<rows; i++){
        for(int j=0;j<cols; j++){
            int temp = matrix[rowIndex2][i];
            matrix[rowIndex2][i] = matrix[rowIndex1][i];
            matrix[rowIndex1][i] = temp;
        }
    }
}

//SWAP TWO COLS
void swapMatrixCols(int matrix[10][10], int rows, int cols, int colIndex1, int colIndex2){
    for(int i=0; i<rows; i++){
        for(int j=0;j<cols; j++){
            int temp = matrix[j][colIndex1];
            matrix[j][colIndex1] = matrix[j][colIndex2];
            matrix[j][colIndex2] = temp;
        }
    }
}

//print matrix
void printMatrix(int matrix[10][10], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    int matrix[10][10];
    printf("Enter the matrix: \n");
    inputMatrix(matrix,3,3);

    int r1, r2;
    printf("Enter the numbers of two rows to be exchanged: \n");
    scanf("%d %d", &r1, &r2);
    swapMatrixRows(matrix,3,3,r1,r2);
    printMatrix(matrix,3,3);

    int c1, c2;
    printf("Enter the numbers of two cols to be exchanged: \n");
    scanf("%d %d", &c1, &c2);
    swapMatrixCols(matrix,3,3,c1,c2);
    printMatrix(matrix,3,3);
}
