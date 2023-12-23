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
void elementx100(int i) {
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL)
	{
		if (index == i) {
			ptr->data *= 100;
			return;
		}
		ptr = ptr->next;
		index++;
	}

}
void main() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(9);
	addToHead(18);
	printList();
	elementx100(3);
	printList();


	clearList();


}