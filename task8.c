#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 20
typedef char** my_list;//With this definition, i can create variables of type list that represent a list of pointers to strings


//function initiallized the members of the list 
void my_list_initialize(my_list ls){
    for(int i=0; i<MAX_SIZE; i++){
        ls[i] = (char*)malloc(MAX_SIZE + sizeof(char));
        sprintf(ls[i], "Item %d", i+1);
    }
}

//function checks if the list is empty
bool is_my_list_empty(my_list ls){
    for(int i=0; i<MAX_SIZE; i++){
        if(ls[i] != NULL){
            return false;
        }
    }
    return true;
}

//function clears every element of the list
void my_list_clear(my_list ls){
    for (int i = 0; i < MAX_SIZE; i++) {
        if (ls[i] != NULL) {
            free(ls[i]);
            ls[i] = NULL;
        }
    }
}

//add element in the beginning position
void my_list_push_back(char *data, my_list ls){
    for(int i=0; i<MAX_SIZE; i++){
        data[i] = (char*)malloc(i * sizeof(char));
    }
}

//delete element in the beginning position(front position)
void my_list_pop_back(my_list ls){
    for(int i=0; i<MAX_SIZE; i++){
        if(ls[i] != 0){
            free(ls[i]);
            ls[i] = NULL;
        }
    }
}


//add element in the end position
void my_list_push_front(char *data, my_list ls){
    for(int i = MAX_SIZE - 1; i > 0; i--) {
        strcpy(ls[i], ls[i - 1]);
    }
    strcpy(ls[0], data);
}

//delete element in the end position
void my_list_pop_front(my_list ls) {
    for(int i = 0; i < MAX_SIZE - 1; i++) {
        strcpy(ls[i], ls[i + 1]);
    }
    ls[MAX_SIZE - 1] = NULL;
}



//add element in the current position
void my_list_insert(char *data, my_list ls, size_t pos) {
    for(int i = MAX_SIZE - 1; i > pos; i--) {
        strcpy(ls[i], ls[i - 1]);
    }
    strcpy(ls[pos], data);
}


//delete element in the current position
void my_list_erase(my_list ls, size_t pos) {
    for(int i = pos; i < MAX_SIZE - 1; i++) {
        strcpy(ls[i], ls[i + 1]);
    }
    ls[MAX_SIZE - 1] = NULL;
}

void my_list_resize(my_list ls, size_t elementsCount) {
    if (elementsCount >= MAX_SIZE) {
        return;
    }
    for (int i = elementsCount; i < MAX_SIZE; i++) {
        if (ls[i] != NULL) {
            free(ls[i]);
            ls[i] = NULL;
        }
    }
}

void my_list_resize_init(my_list ls, size_t elementsCount, char *defaultValue) {
    if (elementsCount >= MAX_SIZE) {
        return;
    }
    for (int i = elementsCount; i < MAX_SIZE; i++) {
        if (ls[i] == NULL) {
            ls[i] = (char*)malloc(strlen(defaultValue) + 1);
            strcpy(ls[i], defaultValue);
        }
    }
}

size_t my_list_erase_if(my_list ls, _Bool (*predicateFunc)(char*)) {
    size_t count = 0;
    size_t j = 0;
    for (size_t i = 0; i < MAX_SIZE; i++) {
        if (ls[i] != NULL && !predicateFunc(ls[i])) {
            ls[j++] = ls[i];
        } else {
            free(ls[i]);
            count++;
        }
    }
    for (size_t k = j; k < MAX_SIZE; k++) {
        ls[k] = NULL;
    }
    return count;
}

void my_list_iterate(my_list ls, void (*iterFunc)(char*)) {
    for (int i = 0; i < MAX_SIZE; i++) {
        if (ls[i] != NULL) {
            iterFunc(ls[i]);
        }
    }
}
