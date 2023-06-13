//Напишете функция, която скъсява подадения й стринг до първия whitespace
#include<stdio.h>
#include<string.h>
void cutString(char* str){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            str[i] = '\0';
            //return;
        }
    }
    printf("%s", str);
}

// char *Cut_String_to_Whitespace(char* pString)
// {
// 	int Length = (int)(strlen(pString));
	
// 	for (int i = 0; i < Length; i++)
// 	{
// 		if (isspace(*(pString+i)) || ispunct(*(pString + i)))
// 		{
// 			*(pString + i) = *(pString + Length);
// 			return pString;			
// 		}
// 	}
// 	return 0;
// }
int main(void){
    char str[100] = "hello world ";
    cutString(str);
}
