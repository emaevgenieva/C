// Напишете функция, която приема два стринга и претърсва за втория в
// първия. Ако го намери - връща индекса на символа, от който започва
// подстринга в стринга. Ако не го намери, връща: -1
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// int isSubstring(const char* str1,const char* str2){
//     int str1Len = strlen(str1);
//     int str2Len = strlen(str2);
//     for(int i=0; i<str1Len ; i++){
//         bool differenceFound = false;

//         if(str1[i] == str2[0]){
//             int str2Indx = 1;
//             int begin = i + 1;
            
//             for(int j = begin; j< begin + str2Len - 1; j++){
//                 if(str1[j] != str2[str2Indx++]){
//                     differenceFound = true;
//                     break;
//                 }
//             }
//             if(!differenceFound)
//                 return str2Indx;
//         }
//     }
//     return -1;
// }

// int isSubstring(const char* str1,const char* str2){
//     int index1=0;
//     int index2;
//     int found = 0;
    
//     while(str1[index1] != '\0'){
//         // If first character of word matches with the given string
//         if(str1[index1] == str2[0]){
//             index2 = 0;
//             found = 1;
//             while(str2[index1+index2] != str2[index2]){
//                 found = 0;
//                 break;
//             }
//             index2++;
//         }

//         if(found == 1){
//             break;
//         }
//     }
//     index1++;
// }

int main(void){
    char str1[] = "I am Ema from Bulgaria";
    char str2[] = "no";
    int result = isSubstring(str1,str2);
    if(result == 1){
        printf("Present at index\n", result);
    }
    else{
        printf("Not found.");
    }
}
