// Напишете функция, която приема два стринга и връща число - колко пъти се
// среща втория стринг в първия
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isSubstring(const char* str1, const char* str2)
{
	int lenStr1 = strlen(str1);
	int lenStr2 = strlen(str2);

	for (int i = 0; i < lenStr1; i++)
	{
		bool differenceFound = false;

		if (str1[i] == str2[0])
		{
			int str2Index = 1;
			int begin = i + 1;

			for (int j = begin; j < begin + lenStr2 - 1; j++)
			{
				if (str1[j] != str2[str2Index++])
				{
					differenceFound = true;
					break;
				}
			}
			if (!differenceFound)
				return true;
		}
	}
	return false;
}

int number(const char* str1, const char* str2){
    int counter = 0;
    int idx = 0;
    while(str1[idx] != '\0' && str2[idx] != '\0'){
		//idx++;
        if(isSubstring(str1,str2)){
            counter++;
        }
		idx++;
        //counter++;
    }
    
    return counter;
}


int main(void){
    char str1[] = "Code code code";
    char str2[] = "code";
    int result = number(str1,str2);
    if(result > 0){
        printf("The number is: %d",result);
    }
    else{
        printf("Not found.");
    }
    
}
