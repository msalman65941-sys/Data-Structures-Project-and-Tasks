#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

int main()
{
	Node* head = new Node;
	Node* second = new Node;
	Node* third = new Node;

	head->data = 10;
	head->next = second;
	second ->data = 20;
	second->next = third;
	third->data = 30;
	third->next = NULL;

	cout << "Data: " << head->data << " " << second->data << " " << third->data;
	cout << "\nAddresses: " << head->next << " " << second->next << " " << third->next;

	cout << "\nData Show Through Loop: " << endl;
	Node* current = head;
	while (current != NULL)
	{
		cout << current->data << " ";
		current = current->next;
	}
	
	return 0;
	
}