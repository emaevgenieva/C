// Напишете функция calmify_str, която заменя всички малки букви с главни и
// всички точки с удивителни в подадения й стринг.
#include<stdio.h>
#include<string.h>
void calmy(char* str){
    int counter = 0;
    while(str[counter] != '\0'){
        if(str[counter] >= 'a' && str[counter] <= 'z'){
            str[counter] -= 32;
        }
        //counter++;

        if(str[counter] == '.'){
            str[counter] = '!';
        }
        counter++;
    }
    
    printf("%s", str);
}

// void calmify_str(char* str){
//     for(int i=0; str[i] != '\0';i++){
//         if(str[i] >= 'a' && str[i] <= 'z'){
//             str[i] -= 32;     
//         }
        
//         else if(str[i] == '.'){
//             str[i] = '!';
//         }
//     }
//     printf("%s", str);
// }

int main(void){
    char str[100] = "....AAvbghTThy...";
    calmy(str);
}
