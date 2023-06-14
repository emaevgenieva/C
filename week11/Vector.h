#pragma once
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

#define VECTOR_INIT_CAPACITY 10
typedef char* vector_data;
typedef struct vector
{
	vector_data data;
	size_t size;
	size_t capacity;

}vector;
void my_vector_init(vector* v);
void my_vector_empty(vector* v);
void my_vector_clear(vector* v);
size_t my_vector_size(vector* v);
void my_vector_push_back(char* data, vector* v);
void my_vector_insert(char* data, vector* vec, size_t pos);
void my_vector_pop_back(vector* vec);
void my_vector_erase(vector* vec, size_t pos);
size_t my_vector_capacity(vector* vec);
void my_vector_reserve(vector* vec, size_t minCapacity);
void my_vector_resize(vector* vec, size_t elementsCount);
void my_vector_resize_init(vector* vec, size_t elementsCount, char* defaultValue);
char* my_vector_front(vector* vec);
char* my_vector_back(vector* vec);
char* my_vector_at(vector* vec, size_t index);
