#include "HW_14.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include <locale.h>
#define SIZE 15
#define STR 100
#define SIZE2 26

void print_char_arr(const char array[]);
void reverse_char_arr(char cOriginalArray[]);
int palindrom_str(const char arr[]);
char* func_space(char* arr);
void calmify_str(char arr[]);
int counter_char_letter_Str(const char array[], char letter);
int str_Contains_subStr(char const* str, char const* subStr);
int counter_char_array(char array[], char array1[]);
int valid_email(const char* stringName);
char* str_char(char* stringWord, char charLetter);
char* str_rchar(const char* stringWord, char charLetter);
int is_char_unique_in_str(const char* stringWord, const char letter);
void shorten_str(char* stringWord, int number);
char* my_strcat(char* stringWord, char* secondString);
int counter_strings(char* words);
void counter_words_repeat(char* str);
int my_strcpm(char* str1, char* str2);
void reverse_str(char arr[]);
void hw_14_01(void) {

	/*task 1 Напишете функция, която обръща c string наобратно, използвайки само
адресна аритметика. Принтирайте оригиналния и обърнатия стринг един под
друг.*/


	char cArrString[SIZE] = { "Hello World! \0" };
	print_char_arr(cArrString);
	reverse_char_arr(cArrString);
	print_char_arr(cArrString);

}
void hw_14_02(void) {
	char cArrString[SIZE] = "allllla";
	printf("%d", palindrom_str(cArrString));
}
void hw_14_03(void) {
	char cArrString[SIZE] = { "Hello World! \0" }; // Is not palindrom
	//char cArrString[SIZE] = { "madam" }; //Is palindrome

	int result = palindrom_str(cArrString);
	if (result == 1) {
		printf("The string is palindrome.");
	}
	else {
		printf("The string is not palindrome.");
	}
}
void hw_14_04(void) {
	/*Напишете функция, която скъсява подадения й стринг до първия whitespace.*/
	char arr[SIZE] = "my name is";
	func_space(arr);
}
void hw_14_05(void) {
	/*Напишете функция, която приема стринг и char символ и връща броя на
срещанията на символа в стринга.*/

	char letter = 'l';
	char str[SIZE] = "Hello";
	printf("%d ", counter_char_letter_Str(str, letter));
}
void hw_14_06(void) {
	char str[SIZE] = "transmition";
	char* ptrStr = str;
	char subStr[SIZE] = "ns";
	char* ptrSubStr = subStr;

	printf("%d ", str_Contains_subStr(ptrStr, ptrSubStr));
}
void hw_14_07(void) {

	char array[36] = { "How many times How How." };
	char array1[36] = "How";
	printf("%d ", counter_char_array(array, array1));
}
void hw_14_08(void) {
	const char validEmail[SIZE2] = "12mulan@abv.bg";

	printf("%d", valid_email(validEmail));
}
void hw_14_09(void) {

	char* welcomeMessage =
	{
		"Hello "
		"orange "
		"apple "
	};

	printf("%d", counter_strings(welcomeMessage));
}
void hw_14_10(void) {

	char input[SIZE2] = "apple";
	char input2[SIZE2] = "appleklk";
	printf("%d", my_strcpm(input, input2));
}


void reverse_char_arr(const char cOriginalArray[]) {
	char temp;
	char* ptr = cOriginalArray;
	int len = (int)strlen(ptr) - 1;


	for (int i = 0; i < len; i++)
	{
		temp = *(ptr + i);
		*(ptr + i) = *(ptr + len);
		*(ptr + len) = temp;
		len--;
	}
}
int counter_char_letter_Str(const char array[], char letter) {

	const char* ptr = array;
	int len = (int)strlen(array);
	int counter = 0;
	for (int i = 0; i < len; i++)
	{
		if (*(ptr + i) == letter) {
			counter++;
		}
	}
	return counter;
}
int str_Contains_subStr(const char* str, const char* subStr) {

	int lenStr = (int)strlen(str);
	int lenSubStr = (int)strlen(subStr);

	for (int i = 0; i < lenSubStr; i++)
	{
		for (int j = 0; j < lenStr; j++)
		{
			if (str[j] == subStr[i]) {
				return j;
			}
		}
		
	}
	return -1;
}
int counter_char_array(char array[], char array1[]) {

	int aLen = (int)strlen(array);
	int a1len = (int)strlen(array1);
	int endLen = aLen - a1len + 1;

	int counter = 0;
	for (int i = 0; i < endLen; i++)
	{
		bool is_Found = true;
		for (int j = 0; j < a1len; j++)
		{
			if (array1[j] != array[i + j]) {
				is_Found = false;
				break;
			}


		}
		if (is_Found) {
			counter++;
		}
	}

	return counter;
}
int valid_email(const char* stringName) {

	int isValidMail = 0;
	char at = '@';
	char dote = '.';
	int counterAt = 0;
	int counterDote = 0;
	int len = (int)strlen(stringName);
	for (int i = 0; i < len; i++)
	{
		if (i == 0 && isdigit(*(stringName + i))) {
			return 0;
		}
		if (isalnum(*(stringName + i))) {
			isValidMail = 1;
		}
		if (*(stringName + i) == at) {
			isValidMail = 1;
			counterAt++;
		}
		if (*(stringName + i) == dote) {
			isValidMail = 1;
			counterDote++;
		}


	}
	if (counterAt == 0) {
		return 0;
	}
	else if (counterDote == 0) {
		return 0;
	}
	return isValidMail;
}
char* str_char(char* stringWord, char charLetter) {

	char* ptrString = stringWord;
	char* ptr = NULL;


	for (int i = 0; i < (int)strlen(ptrString); i++)
	{
		if (*(ptrString + i) == charLetter) {

			ptr = *(ptrString + i);
			return ptr;
		}
	}


	return ptr;
}
char* str_rchar(const char* stringWord, char charLetter) {

	char* ptr = 0;
	int lastLement = (int)strlen(stringWord) - 1;
	for (int i = 0; i < strlen(stringWord); i++)
	{
		if (stringWord[i] == charLetter) {

			ptr = stringWord[lastLement];
			return ptr;
		}
	}
	return ptr;
}
int is_char_unique_in_str(const char* stringWord, const char letter) {

	int counter = 0;

	for (int i = 0; i < strlen(stringWord); i++)
	{
		if (stringWord[i] == letter) {

			counter++;

		}
	}

	return counter == 1 ? 1 : 0;
}
void shorten_str(char* stringWord, int number) {

	int stringLength = sizeof(stringWord);

	if (stringLength > number || number > 0) {

		//*(*(stringWord) + number) = '\0';

	}
}
char* my_strcat(char* stringWord, char* secondString) {
	int length = (int)strlen(secondString);
	int firstStringLength = (int)strlen(stringWord);

	char* ptr = secondString;
	for (int i = firstStringLength - 1; i >= 0; i--)
	{
		stringWord[i] = secondString[i];
	}

	return stringWord;
}
int counter_strings(char* words) {

	int counterNewLine = 0;

	for (int i = 0; words[i] != '\0'; i++)
	{
		if ((words[i]) == ' ') {
			counterNewLine++;
		}
	}
	return counterNewLine;
}
int my_strcpm(char* str1, char* str2) {
	int counter = 0;
	int lenStr1 = (int)strlen(str1);
	for (int i = 0; i < 15; i++)
	{
		if (str1[i] == str2[i]) {

			if (str1[i + 1] == '\0' && str2[i + 1] != '\0' || str1[i + 1] != '\0' && str2[i + 1] == '\0') {
				char letter = str1[i + 1];
				char letter1 = str2[i + 1];
				if (letter > letter1) {

					return 1;
				}
				if (letter < letter1) {
					return -1;
				}

			}
			counter++;
			if (counter == lenStr1) {
				return 0;
			}
		}
		if (str1[i] != str2[i]) {
			char letter = str1[i];
			char letter1 = str2[i];
			if (letter > letter1) {

				return 1;
			}
			if (letter < letter1) {
				return -1;
			}

		}
	}
	return 0;
}
void counter_words_repeat(char* str) {

	char* temp = str;
	char word[25];
	int counter = 0;
	int counterWord = 0;
	int result = 0;
	int i = 0;
	int j = 0;
	while (*(str + i) != ' ') {

		if (*(str + i) == *(temp + i)) {

			while (*(str + i) != ' ') {

				if (*(str + i) == *(temp + i)) {
					word[i] = temp[i];
					counter++;
				}
				if (*(str + i) != *(temp + i)) {
					counter = 0;

					break;
				}
				i++;
			}
			if (counter > 0) {
				counterWord++;
				printf("%s - %d", word, counterWord);
			}
		}
		if (*(str + i) != *(temp + i)) {
			break;
		}
		i++;
	}



}
char* func_space(char* arr) {

	int len = (int)strlen(arr);
	for (int i = 0; i < len; i++)
	{

		if (isspace(*(arr + i))) {

			*(arr + i) = *(arr + len);
			return arr;
		}


	}
	return 0;
}
void reverse_str(char arr[]) {

	char temp;
	char* ptr = arr;
	int len = (int)strlen(ptr) - 1;


	for (int i = 0; i < len; i++)
	{
		temp = *(ptr + i);
		*(ptr + i) = *(ptr + len);
		*(ptr + len) = temp;
		len--;
	}

}
int palindrom_str(const char arr[]) {
	int i;

	const char* ptr = arr;
	int len = (int)strlen(ptr) - 1;

	int counter = 0;
	for (i = 0; i < len / 2; i++)
	{
		char strartLetter = *(ptr + i);
		char lastLetter = *(ptr + (len - i));
		if (strartLetter == lastLetter) {
			counter++;
		}

	}
	if (counter == i) {
		return 1;
	}
	else {
		return 0;
	}

}
void calmify_str(char arr[]) {
	char* ptr = arr;
	int len = (int)strlen(arr);
	for (int i = 0; i < len; i++)
	{
		*(ptr + i) = toupper(*(ptr + i));

		if (*(ptr + i) == '.') {
			*(ptr + i) = '!';
		}
	}
	printf("%s", ptr);
}
void print_char_arr(const char array[]) {

	int len = (int)strlen(array);
	for (int i = 0; i < len; i++)
	{
		printf("%c", array[i]);
	}
}
