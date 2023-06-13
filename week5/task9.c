// Напишете функция, която брои броя на редовете в един multi-line стринг
// (стринг, който е на няколко реда)
#include<stdio.h>
#include<string.h>

int numberOfLines(char* str){
    int counterLines = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == '\n'){
            counterLines++;
        }
    }
    return (counterLines +1);
}

int main(void){
    char str[] = "i am \n Ema from \n codeAcademy";
    int result = numberOfLines(str);
    printf("Total number of lines is: %d",result);
}
