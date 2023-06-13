// Напишете функция, която връща дали даден стринг е валиден email адрес.
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isCharacter(char symbol){
    return ((symbol >= 'a' && symbol<= 'z') || (symbol >= 'A' && symbol <= 'Z'));
}

bool isDigit(char symbol){
    return (symbol >= '0' && symbol <= '9');
}

bool isValidEmail(char* email){
    if(!isCharacter(email[0])){
            return false;
    }
    int at = -1;//@
    int dot = -1;//.

    for(int i=0; email[i] != '\0'; i++){
        if(email[i] == '@'){
            at = i;
        }
        else if(email[i] == '.'){
            dot = i;
        }
    }
    if(at == -1 || dot == -1){
        return false;
    }
    if(at > dot){
        return false;
    }
}

int main(){
    char email1[] = "alana.baker";
    char email2[] = "alanabaker@gmail.com";
    bool res1 = isValidEmail(email1);
    bool res2 = isValidEmail(email2);
    if(res2){
        printf("Result 2 is valid!");
    }
    else{
        printf("Result 2 is invalid");
    }
    printf("\n");
    if(res1){
        printf("Result 1 is valid!");
    }
    else{
        printf("Result 1 is invalid!");
    }

}
