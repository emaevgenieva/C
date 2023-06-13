#define _CRT_SECURE_NO_WARNINGS
#include "Task-09.h"
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


struct Person person;

void print_person_data(struct PersonNode person[], enum len len);
void print_perosns_By_ages(struct PersonNode arr[], enum len len, int ages);

void task_09(void) {

	struct Person persons[5] =
	{
		{
			.name = "Anna Dimitrova",
			.age = 25
		},
		{
			.name = "Ivan Ivanov",
			.age = 30
		},
		{
			.name = "Peter Petrov",
			.age = 16
		},
		{
			.name = "Velina Todorova",
			.age = 10
		},
		{
			.name = "Anna Peneve",
			.age = 78
		}
	};
	
	struct PersonNode nodeNode[5];
	enum { array = sizeof(persons) / sizeof(persons[0]) };
	
	int i;
	for (i = 0; i < array; i++)
	{
		nodeNode[i].person = persons[i];
		if ((i + 1) < array) {
			nodeNode[i].next = &nodeNode[i + 1];
		}
		else {
			nodeNode[i].next = NULL;
		}
		
	}
	int ages = 18;
	print_person_data(nodeNode, array);
	print_perosns_By_ages(nodeNode, array, ages);
}
void print_person_data(struct PersonNode arr[], enum len len) {

	puts("Data information:\n");
		while (arr != NULL) {

			printf("Name: %s -> Age: %d\n", arr->person.name, arr->person.age);
			arr = arr->next;
		}
		printf("\n");

		
}
void print_perosns_By_ages(struct PersonNode arr[], enum len len, int ages) {
	printf("The Names over 18 years old: \n");
	for (int i = 0; i < len; i++)
	{
		if (arr[i].person.age > ages) {
			printf(" Name: %s -> Ages: %d\n", arr[i].person.name, arr[i].person.age);
		}
		if (arr[i].person.age < ages) {
			if ((i + 1) < len) {
				arr[i].next = &arr[i + 1];
			}
			else {
				arr[i].next = NULL;
			}
			
		}
	}
}

