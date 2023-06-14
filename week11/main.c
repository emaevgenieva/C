#include"Vector.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main(int argc, char* argv[])
{
    vector myVec;

    my_vector_init(&myVec);

    char str1[] = "Hello";
    char str2[] = "World";

    my_vector_push_back(str1, &myVec);
    my_vector_push_back(str2, &myVec);

    printf("Size of the vector: %d\n", my_vector_size(&myVec));
    printf("Front of the vector: %s\n", my_vector_front(&myVec));
    printf("Back of the vector: %s\n", my_vector_back(&myVec));

    my_vector_clear(&myVec);

    return 0;
}