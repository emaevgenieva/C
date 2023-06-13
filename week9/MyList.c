#include "MyList.h"
#include<stdio.h>
#include<string.h>

struct Person* head = NULL;
struct Person* current = NULL;
struct Person person;

void mylist(void) {
	char name[] = "Rali";
	int age = 20;
	insertFirst(age, *name);
	printList();
}
void printList() {
	struct Person* ptr = head;

	printf("\n[");

	while (ptr != NULL)
	{
		printf("%d %s", ptr->age, ptr->name);
		ptr = ptr->next;
	}

	printf("]");
}
/////////////Insert link at the first location
void insertFirst(int age, char name) {
	//create a link
	struct Person* link = (struct Person*)malloc(sizeof(struct Person));

	link->age = age;
	link->name = name;

	link->next = head;

	head = link;
}
struct person* deleteFirst() {
	struct Person* tempLink = head;
	head = head->next;

	return tempLink;
}int length() {
	int length = 0;
	struct Person* currentPerson;

	for (currentPerson = head; currentPerson != NULL; currentPerson = currentPerson->next)
	{
		length++;
	}
	return length;
}
struct Person* find(int age) {

	struct Person* current = head;

	if (head == NULL) {
		return NULL;
	}

	while (current->age != age) {
		if (current->next == NULL) {
			return NULL;
		}
		else {
			current = current->next;
		}
	}

	return current;
}
struct Person* deleteByAge(int age) {
	struct Person* current = head;
	struct Person* previus = NULL;

	if (head == NULL) {
		return NULL;
	}
	while (current->age != age) {

		if (current->next == NULL) {
			return NULL;
		}
		else {
			previus = current;
			current = current->next;
		}
	}
	if (current == head) {
		head = head->next;
	}
	else {
		previus->next = current->next;
	}

	return current;
}