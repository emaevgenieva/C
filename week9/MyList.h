#pragma once
#include <stdio.h>


void mylist(void);

void printList();
void insertFirst(int age, char name);
int length();
struct Person* find(int age);
struct Person* deleteFirst();
struct Person* deleteByAge(int age);
struct Person {
	int age;
	char* name;
	struct node* next;
};
