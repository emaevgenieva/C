// Напишете функция, която приема стринг и char символ и връща броя на
// срещанията на символа в стринга.
#include<stdio.h>
#include<string.h>

int countOfChar(const char* str, const char c){
    int counter = 0;
    for(int i=0; str[i]; i++){
        if(str[i] == c){
            counter++;
        }
    }
    return counter;
}
void calmy(char* str){
    int counter = 0;
    while(str[counter] != '\0'){
        if(str[counter] >= 'a' && str[counter] <= 'z'){
            str[counter] -= 32;
        }
        
        counter++;
    }
    
    printf("%s", str);
}

int main(void){
    char str[] = "My name is Ema";
    char ch = 'A';
    calmy(str);//turn into bigger
    int result = countOfChar(str,ch);
    printf("\n%d",result);
}
