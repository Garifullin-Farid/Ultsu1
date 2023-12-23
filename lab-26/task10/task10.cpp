#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
struct Node* first = NULL;

void printList() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		printf("(%d) -> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

void addToHead(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->next = first;
	newNode->data = value;

	first = newNode;
}

int deleteFromHead() {
	int value = first->data;
	struct Node* delNode = first;
	first = first->next;
	free(delNode);
	return value;
}

void clearList() {
	while (first != NULL)
	{
		struct Node* delNode = first;
		first = first->next;
		free(delNode);
	}
}
void elementRightx10() {
	if (first == NULL) return;
	struct Node* ptr = first;
	int index = 1;
	while (ptr != NULL)
	{
		struct Node* ptr1 = first;
		while (ptr1!=NULL)
		{
			if (ptr1->data == ptr->data &&ptr!=ptr1) {
				printf("1\n");
				return;

			}
			ptr1 = ptr1->next;
		}
		
		ptr = ptr->next;
	}
	printf("0\n");
}

void main() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(9);
	addToHead(18);
	printList();
	elementRightx10();
	addToHead(1);
	printList();
	elementRightx10();


	clearList();


}