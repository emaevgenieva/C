#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node* next;
}node;
int counter(node* node);
int input(node* n, int num) {
	node* temp = (node*)malloc(sizeof(node));
}
int main(void) {

	
}
int counter(node* nodeNode) {
	int counter = 0;

	if (nodeNode == NULL) {
		return -1;
	}
	else {
		nodeNode = nodeNode->next;
		counter++;
	}

	return counter;
}

