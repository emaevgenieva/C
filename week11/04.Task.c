﻿#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*Напишете програма, която отваря три файла едновременно:
● файл с имена, всяко на нов ред ( в режим на четене )
● файл с фамилии, всяка на нов ред ( в режим на четене )
● файл с произволно-генерирани двойки от име + фамилия. ( в режим на
писане )
Програмата трябва да пита потребителя за желан брой нови генерирания
на произволна двойка име-фамилия и за това дали да добави
новогенерираните имена в края на файла или да замести съдържанието*/
int main(void) {
	
	
	FILE* fp = NULL;
	enum { MAX_LEN = 64 };
	char words[MAX_LEN] = { 0 };
	/*if ((fp = fopen(stdin, "a+")) == NULL)
	{
		fprintf(stdout, "Can't open \"words\" file.\n");
		exit(1);
	}*/
	
}