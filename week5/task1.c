// Напишете функция, която обръща c string наобратно, използвайки само
// адресна аритметика. Принтирайте оригиналния и обърнатия стринг един под
// друг.
#include<stdio.h>
#include<string.h>

void reverseString(char* str){
    int len = strlen(str);
    char* begin_ptr = str;
    char* end_ptr = begin_ptr + len - 1;

    
    // Swap the character from start and end
    // index using begin_ptr and end_ptr
    for( ;begin_ptr < end_ptr; begin_ptr++, end_ptr--){
        char temp = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = temp;
    }
}

int main(void){
    char str[100] = "CodeAcademy";
    printf("Enter a string: %s\n", str);
 
    reverseString(str);
    printf("Reverse string: %s\n", str);
}


// void isPalindrome(char* str){
//     int counter =0;
//     int i;
//     int len= strlen(str);
//     for(i=0; i< len/2;i++){
//         if(str[i] == str[len - i - 1]){
//             counter++;
//         }
//     }
//     if(counter == i){
//         printf("is Palindrome");
//     }
//     else{
//         printf("Not palindrome");
//     }
// }
