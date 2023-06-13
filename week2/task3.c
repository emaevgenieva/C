#include<stdio.h>
#include<string.h>

// Задача 13. Ако имаме символен низ char str[] = “HELLO”, заменете
// всичките символи с главна буква със съответните символи с малка
// буква.

int main(){
    char str[]="HELLO";
    for(int i=0; i<= strlen(str);i++){
        if(str[i] == 'H'){
            str[i] = 'h';
        }
        else if(str[i] == 'E'){
            str[i] = 'e';
        }
        else if(str[i] == 'L'){
            str[i] = 'l';
        }
        else if(str[i] == 'O'){
            str[i] = 'o';
        }
    }
    printf("The result is: %s", str);
}
