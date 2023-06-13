// Напишете функция:
// void copystr(char *to, char *from),
// която копира една последователност от символи в друга.
#include<stdio.h>

void copyStr(char *to, char *from){
    while(*from){
        *to = *from; //copy value of *from into *to
        to++;
        from++;
    } 
}

int main(){
    char str1[6] = "Hello";
    char str2[6] = "world";
    copyStr(str1, str2);
    printf("%s %s", str1, str2);
}
