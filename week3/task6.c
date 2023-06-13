// Напишете функция, която умножава 3-мерен float вектор(едномерен масив с три
// float елемента) по 3x3 float матрицa 
#include<stdio.h>

void multiplicationByVector(float matrix[3][3], float vector[3], float resultVector[3]){
    
    for(int i=0; i<3; i++){
        float sum=0.0f;
        for(int j=0; j<3; j++){
            float sum=0.0f;
            for(int k=0; k<3; k++){
                sum+=matrix[j][i] * vector[j];
            }

            resultVector[j] = sum;
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

void printVector(float vector[3]){
    for(int i=0; i<3; i++){
        printf(" %.2f\n",vector[i]);
    }
}

int main(void){
    //matrix
    printf("The matrix is: \n");
    float matrix[3][3]={{1.1f,1.2f,1.3f},{1.4f,4.7f,3.3f},{3.3f,2.1f,2.2f}};
    printMatrix(matrix);

    //vector
    float vector[3]={1.1f,1.2f,1.3f};
    printf("The vector is: \n");
    printVector(vector);

    //result vector
    float resultVector[3];
    printf("The result is: \n");
    multiplicationByVector(matrix,vector,resultVector);
    printVector(resultVector);

}
