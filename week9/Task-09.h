#pragma once


struct Person {
	char name[256];
	unsigned age;
};
struct PersonNode {
	struct Person person;
	struct PersonNode* next;
};

void task_09(void);

