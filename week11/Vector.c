#include "Vector.h"

void my_vector_init(vector* vec)
{
	vec->data = NULL;
	vec->size = 0;
	vec->capacity = VECTOR_INIT_CAPACITY;
	vec->data = (vector*)malloc(sizeof(vector) * vec->capacity);
}
void my_vector_empty(vector* v)
{
	return v->size == 0;
}
void my_vector_clear(vector* v)
{
	v->size = 0;
	v->capacity = VECTOR_INIT_CAPACITY;
	free(v->data);
	v->data = NULL;
	my_vector_init(v);
}
size_t my_vector_size(vector* v)
{
	return v->size;
}
void my_vector_push_back(char* data, vector* vec)
{
	if (vec->size == vec->capacity) {
		// Increase the capacity of the vector if the current size is equal to the current capacity
		vec->capacity = vec->capacity == 0 ? 1 : vec->capacity * 2;
		vec->data = (char*)realloc(vec->data, vec->capacity * sizeof(char));
	}

	size_t len = strlen(data);
	char* dest = vec->data + vec->size;
	memcpy(dest, data, len + 1);
	vec->size += len;
}

void my_vector_insert(char* data, vector* vec, size_t pos)
{
	if (vec->size == vec->capacity)
	{
		vec->capacity *= 2;
		vec->data = realloc(vec->data, vec->capacity * sizeof(char));
	}

	memmove(vec->data + pos + strlen(data), vec->data + pos, (vec->size - pos) * sizeof(char));
	memcpy(vec->data + pos, data, strlen(data));
	vec->size += strlen(data);
}
void my_vector_pop_back(vector* vec)
{
	if (vec->size > 0)
	{
		vec->size--;
	}
}
void my_vector_erase(vector* vec, size_t pos)
{
	if (pos >= vec->size)
	{
		return;
	}
	for (size_t i = pos; i < vec->size - 1; i++)
	{
		vec->data = vec->data[i + 1];
	}
	vec->size--;
}
size_t my_vector_capacity(vector* vec)
{
	return vec->capacity;
}
void my_vector_reserve(vector* vec, size_t minCapacity)
{
	if (minCapacity > vec->capacity)
	{
		vec->capacity = minCapacity;
		vec->data = realloc(vec->data, vec->capacity * sizeof(char));
	}
}
void my_vector_resize(vector* vec, size_t elementsCount)
{
	if (elementsCount < vec->size)
	{
		vec->size = elementsCount;
	}
	else
	{
		vec->size = elementsCount;
		vec->capacity = elementsCount;
		vec->data = realloc(vec->data, vec->capacity * sizeof(vector_data));
	}
}
void my_vector_resize_init(vector* vec, size_t elementsCount, char* defaultValue)
{
	if (elementsCount < vec->size) {
		vec->size = elementsCount;
	}
	else {
		vec->size = elementsCount;
		vec->capacity = elementsCount;
		vec->data = realloc(vec->data, vec->capacity * sizeof(vector_data));
		for (size_t i = vec->size - elementsCount; i < vec->size; i++) {
			vec->data[i] = defaultValue;
		}
	}
}
char* my_vector_front(vector* vec)
{
	if (vec->size == 0)
	{
		return NULL;
	}
	return &vec->data[0];
}
char* my_vector_back(vector* vec)
{
	if (vec->size == 0)
	{
		return NULL;
	}
	return &vec->data[vec->size - 1];
}
char* my_vector_at(vector* vec, size_t index)
{
	if (index >= vec->size)
	{
		return NULL;
	}
	return &vec->data[index];
}



