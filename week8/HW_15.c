#include "HW_15.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include <locale.h>
#define SIZE 15
#define STR 10


void read_input(const char* input) {
	char buff[1000] = { 0 };


	int i = 0;
	char c = 0;
	while ((c = getchar()) != EOF) {

		buff[i++] = c;

	}
	printf(buff);
}
void print_array(char* arrayInaput) {
	for (int i = 0; i < strlen(arrayInaput); i++)
	{
		printf("%c", *(arrayInaput + i));
	}
}
void print_input(const char* arr) {

	char buff[1000] = { 0 };
	int counter = 0;
	int counterLetter = 0;
	int counterPunct = 0;
	int i = 0;
	char c = 0;
	while ((c = getchar()) != EOF) {

		buff[i++] = c;

	}

	for (int i = 0; buff[i] != '\0'; i++)
	{

		if (isalpha(buff[i])) {
			counterLetter++;
		}
		else if (ispunct(buff[i])) {

			counterPunct++;
		}
		counter++;
	}

	printf(buff);

	printf("The number of all symbols is: %d\n", counter);
	printf("The number of all letters is: %d\n", counterLetter);
	printf("The number of all punctoations is: %d\n", counterPunct);

}
void print_input_counter_NewLine(const char* arr) {

	char buff[1000] = { 0 };
	int iCouterNewLine = 0;
	int iCounterTab = 0;
	int iCounterSpaces = 0;
	int c = 0;
	int i = 0;
	while ((c = getchar()) != EOF)
	{
		buff[i++] = c;
	}
	for (int i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == '\n') {
			iCouterNewLine++;
		}
		if (buff[i] == '\t') {
			iCounterTab++;
		}
		if (isspace(buff[i])) {
			iCounterSpaces++;
		}
	}
	printf(buff);
	printf("The number of neelines is: %d\n", iCouterNewLine);
	printf("The number of spaces is: %d\n", iCounterSpaces);
	printf("The number of tabs is: %d\n", iCounterTab);
}
void print_delete_space(const char* arr) {

	char buff[1000] = { 0 };
	int counterSpace = 0;
	int c = 0;
	int i = 0;
	
	while ((c = getchar()) != EOF) {
		buff[i++] = c;
	}
	int len = (int)strlen(buff);


	for (int i = 0; i < len; i++)
	{
		if (buff[i] == ' ' && buff[i + 1] == ' ') {


			for (int j = i; j < len; j++)
			{
				buff[j] = buff[j + 1];
			}
			len--;			
			i--;
		}
	}
	printf(buff);
}
void print_text_letters(const char* arr) {

	char buff[1000] = { 0 };
	char* inputBuff = buff;
	int counterSpace = 0;
	int c = 0;
	int i = 0;


	while ((*inputBuff++ = getchar()) != EOF) {

	}
	inputBuff = buff;
	char output_Buffer[1000] = { 0 };
	char* output = output_Buffer;

	while (*inputBuff != '\0') {

		if (isalnum(*inputBuff)) {
			*output = *inputBuff;
			output++;
		}
		inputBuff++;
	}

	printf(output_Buffer);

}
void print_rows_WithLength_over_3(char* arr) {

	printf("Please enter a some text on  multiple lines:\n");
	char c;
	char buff[255];
	int i = 0;
	int countSymbols = 0;
	do
	{
		c = getchar();
		buff[i++] = c;
	} while (c != EOF);
	buff[i] = '\0';


	for (int i = 0; buff[i] != '\0'; i++)
	{

		if ((buff[i] == '\n')
			&& ((buff[i + 1] == '\n' || buff[i + 1] == ' '
				|| buff[i + 2] == '\n' || buff[i + 2] == ' '
				|| buff[i + 3] == '\n' || buff[i + 3] == ' ')))
		{
			while (buff[i] != '\n')
			{
				i++;
			}
		}
		else
		{
			printf("%c", buff[i]);
		}
		countSymbols = 0;

		/*temp = Cut_String_to_NewLine(buff);
		int len = (int)strlen(temp);

		if (len < 4) {
			continue;
		}
		else if (len >= 4) {
			printf(temp);
			temp = buff[len + i];

		}*/

	}

}
float print_average_length(char* arr) {

	char buff[1000] = { 0 };
	int counterSpace = 0;
	int c = 0;
	int i = 0;
	int temp = 0;
	int counter = 0;
	int counterWord = 0;
	while ((c = getchar()) != EOF) {
		buff[i++] = c;
	}
	int len = (int)strlen(buff);
	for (i = 0; i < len; i++)
	{

		if (buff[i] != ' '  && !ispunct(buff[i]) && buff[i] != EOF) {

			while (buff[i] != ' ') {

				if (buff[i] == '\n') {
					break;
				}
				counter++;
				i++;
			}
			counterWord++;
		}

	}

	float result = (float)counter / (float)counterWord;
	return result;
}
void print_text_without_space_tab(char* arr) {

	char buff[1000] = { 0 };
	int counterSpace = 0;
	int c = 0;
	int i = 0;
	int temp = 0;

	while ((c = getchar()) != EOF) {
		buff[i++] = c;
	}
	int len = (int)strlen(buff);
	for (i = 0; i < len; i++)
	{
		if (buff[i] == 32 || (buff[i] == '\n' || (buff[i] == '\t'))) {

			temp = i;
			for (int j = i; j < (len - 1); j++)
			{
				buff[j] = buff[j + 1];
			}
			len--;
			buff[len] = '\0';
			i = 0;


		}

	}
	printf(buff);
}
void print_reverse_string(char* arr) {

	char buff[256] = { 0 };
	char* ptrBuff = buff;
	int c = 0;
	int i = 0;


	while ((c = getchar()) != EOF) {
		buff[i++] = c;
	}
	ptrBuff = buff;


	for (int i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == '\n') {

			char temp;

			int len = (int)strlen(ptrBuff) - 1;


			for (int i = 0; i < len; i++)
			{
				temp = *(ptrBuff + i);
				*(ptrBuff + i) = *(ptrBuff + len);
				*(ptrBuff + len) = temp;
				len--;
			}
		}
	}
	printf("%s", buff);
}
void print_reverse_row_string(char* arr) {

	char buffer[256] = { 0 };
	char* ptr = buffer;
	int c = 0;
	int i = 0;
	while ((c = getchar()) != EOF) {

		buffer[i] = c;
		i++;
	}
	int len = (int)strlen(buffer);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		if (buffer[i] == '\n') {

			char temp;

			for (int i = 0; i < len; i++)
			{
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + (len - 1));
				*(ptr + (len - 1)) = temp;
				len--;
			}
		}
	}
	
	printf("%s", buffer);

}
void print_input_counter_Letters_numbers(char* arr) {

	char buff[256] = { 0 };
	char* ptrBuff = buff;
	int c = 0;
	int i = 0;
	int counter = 0;

	while ((c = getchar()) != EOF) {
		buff[i++] = c;
	}
	ptrBuff = buff;
	int len = (int)strlen(buff);

	for (int i = 0; i < len; i++)
	{
		if (isalpha(*(ptrBuff + i))) {
			continue;
		}
		if (isdigit(*(ptrBuff + i))) {
			counter++;
		}

	}
	printf("%d", counter);
}
void print_row_over_80_symbols(char* arr) {
	char buff[256] = { 0 };
	char output[256] = { 0 };
	char* ptrBuff = buff;
	int c = 0;
	int i = 0;

	while ((c = getchar()) != EOF) {
		buff[i++] = c;
	}
	ptrBuff = buff;
	int len = (int)strlen(buff);

	for (int i = 0; buff[i] != '\0'; i++)
	{
		output[i] = buff[i];
		if (buff[i] == '\n') {
			int len = (int)strlen(output);
			if (len > 80) {
				continue;
			}
		}
		if (buff[i] == '\n') {
			int len = (int)strlen(output);
			printf("%s", output);
		}
	}
}
void print_remove_spacia_tab(char* arr) {

	char buff[256] = { 0 };

	char* ptrBuff = buff;
	int c = 0;
	int i = 0;
	int temp = 0;


	while ((c = getchar()) != EOF) {
		buff[i++] = c;
	}
	ptrBuff = buff;
	int len = (int)strlen(buff);

	for (int i = 0; buff[i] != '\0'; i++)
	{
		if ((*(ptrBuff + i) == 32 || (*(ptrBuff + i) == '\t'))) {

			temp = i;
			for (int j = i; j < (len - 1); j++)
			{
				buff[j] = buff[j + 1];
			}
			len--;
			buff[len] = '\0';
			i = 0;

		}
	}
	printf("%s", buff);
}
void print_Upper_to_Lower(char* arr) {

	char buff[256] = { 0 };
	char* ptrBuff = buff;
	int c = 0;
	int i = 0;

	while ((c = getchar()) != EOF) {
		buff[i++] = c;
	}
	ptrBuff = buff;

	for (int i = 0; buff[i] != '\0'; i++)
	{
		if (isupper(buff[i])) {

			*(ptrBuff + i) = tolower(*(ptrBuff + i));
		}

	}
	printf("%s", buff);
}
void print_revers_row_by_row(char* arr) {

	char buff[256] = { 0 };
	char* ptrBuff = buff;
	int c = 0;
	int i = 0;

	while ((c = getchar()) != EOF) {
		buff[i++] = c;
	}
	ptrBuff = buff;

	for (int i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == '\n') {

			char* temp;

			int len = strlen(ptrBuff) - 1;


			for (int i = 0; i < len; i++)
			{
				temp = *(ptrBuff + i);
				*(ptrBuff + i) = *(ptrBuff + len);
				*(ptrBuff + len) = temp;
				len--;
			}
		}
	}
	printf("%s", buff);
}
char* Cut_String_to_Whitespace(char* pString)
{
	int Length = (int)(strlen(pString));
	for (int i = 0; i < Length; i++)
	{
		if (isspace(*(pString + i)) || ispunct(*(pString + i)))
		{
			*(pString + i) = *(pString + Length);
			return pString;
		}
	}
	return 0;
}
char* Cut_String_to_NewLine(char* pString)
{
	int Length = (int)(strlen(pString));
	for (int i = 0; i < Length; i++)
	{
		if (*(pString + i) == '\n')
		{
			*(pString + i) = *(pString + Length);
			return pString;
		}
	}
	return 0;
}
