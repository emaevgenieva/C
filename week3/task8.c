// Напишете програма, която печата броя на уникалните колони в бинарна
// матрица, съставена само от единици и нули
#include<stdio.h>
#include<stdbool.h>

// void inputMatrix(int** matrix, int rows, int cols){
//     for(int i=0; i != rows; i++,putchar('\n')){
//         for(int j=0; j != cols; j++){
//             scanf("\t%d", &matrix[i*cols+j]);
//         }
//     }
// }


int uniqueCols(int matrix[3][3]){
    int counter = 0;
    for(int i=0; i < 3; ++i){
        //int counter = 0;
        for(int j=i; i < 3 && matrix[i][i] != matrix[j][i]; ++j){
            if(matrix[i][i] == matrix[j][i]){
                counter++;
            }
        }
    }
    printf("%d",counter);
}



int main(void){

    int matrix[3][3]={{1,0,0},{1,0,0},{1,0,0}};
    //printf("The matrix is: \n");
    //inputMatrix(matrix,3,3);
    int result = uniqueCols(matrix);
    printf("%d",result);
}
