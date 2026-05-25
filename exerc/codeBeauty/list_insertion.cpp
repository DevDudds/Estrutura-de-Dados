#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void printList(Node* n){
	while (n){
		cout<<n->data<<endl;
		n = n->next;
	}
}

void insertAtTheFront(Node** head, int newValue){
	Node* newNode = new Node();
	newNode->data = newValue;
	newNode->next = *head;
	*head = newNode;
}

void insertAtTheLast(Node** head, int newValue){
	Node* newNode = new Node();
	newNode->data = newValue;
	newNode->next = NULL;

	if (*head == NULL){
		*head = newNode;
		return;
	}

	Node* last = *head;
	while (last->next != NULL){
		last = last->next;
	}

	last->next = newNode;
}

void insertAfter(Node* previous, int newValue){
	if (previous == NULL){
		cout<<"Você não pode adicionar um elemento nulo!";
		return;
	}

	Node* newNode = new Node();
	newNode->data = newValue;

	newNode->next = previous->next;
	previous->next = newNode;
}

int main(){

	Node* head = new Node();
	insertAtTheFront(&head, -1);
	insertAtTheLast(&head, 5);
	insertAfter(head, 9);
	printList(head);

	return 0;
}
