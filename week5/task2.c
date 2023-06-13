// Напишете функция, която проверява дали подаденият й стринг е палиндром
// (редът на буквите от ляво надясно е същият като от дясно на ляво)
#include<stdio.h>
#include<stdbool.h>

void isPalindrome(char* str){
    char* ptr=str;
    char* rev;

    while(*ptr != '\0'){
        ++ptr;
    }
    --ptr;
    
    for (rev = str; ptr >= rev;){
        if (*ptr == *rev){
            --ptr;
            rev++;
        }
        else{
            break;
        }
    }

    if (rev > ptr){
        printf("String is palindrome.");
    }
    else{
        printf("String is not palindrome.");
    }
          
}
int main(void)
{
    char str[100] = "lalal";
 
    isPalindrome(str);
 
    return 0;
}
