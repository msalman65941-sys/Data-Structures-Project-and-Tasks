#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

int main()
{
	Node* head = NULL;
	Node* current = NULL;

	int n;
	cout << "How Many Nodes Do You Want To Create : ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		Node* newNode = new Node;
		cout << "Enter data for Node " << i << ": ";
		cin >> newNode -> data;
		newNode->next = NULL;

		if (head == NULL)
		{
			head = newNode;
			current = newNode;
		}
		else
		{
			current->next = newNode;
			current = newNode;
		}
	}

	cout << "\nLinked List: ";
	current = head;
	while (current != NULL)
	{
		cout << current->data<<" ";
		current = current->next;
	}
	return 0;
}