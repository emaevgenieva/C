#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int size = 2;
    int index = 0;
    char* buffer = malloc(size * sizeof(char));
    if(buffer == NULL){
        printf("Error! Memory allocation failed");
        return 1;
    }
    int c;
    while(c = getchar() != EOF){
        buffer[index++] = (char) c;
        if(index == size){
            size *=2;
            buffer = realloc(buffer, size * sizeof(char));
            if(buffer == NULL){
                printf("Error re-allocation memory failed");
                return 1;
            }
        }
    }
    buffer[index] = '\0';

    printf("The buffer is: %s\n",buffer);
    free(buffer);
    return 0;
}
