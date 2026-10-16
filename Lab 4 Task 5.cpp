#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

class LinkedList
{
private:
	Node* head;
public:
	LinkedList()
	{
		head = NULL;
	}

	void append(int value)
	{
		Node* newNode = new Node;

		newNode->data = value;
		newNode->next = NULL;

		if (head == NULL)
		{
			head = newNode;
		}
		else
		{
			Node* current = head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = newNode;
		}
	}

	void insert(int position, int value)
	{
		Node* newNode = new Node;
		newNode->data = value;

		if (position == 1)
		{
			newNode->next = head;
			head = newNode;
		}
		else
		{
			Node* current = head;

			for (int i = 1; i < position - 1; i++)
			{
				current = current->next;
			}

			newNode->next = current->next;
			current->next = newNode;
		}
	}

	void remove(int position)
	{
		if (position == 1)
		{
			Node* temp = head;
			head = head->next;
			delete temp;
		}
		else
		{
			Node* current = head;

			for (int i = 1; i < position - 1; i++)
			{
				current = current->next;
			}

			Node* temp = current->next;
			current->next = temp->next;
			delete temp;
		}
	}

	void display()
	{
		Node* current = head;

		while (current != NULL)
		{
			cout << current->data << " ";
			current = current->next;
		}

		cout << endl;
	}
};

int main()
{
	LinkedList list;

	int n, value, position;
	cout << "How many values do you want to append? ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter value: ";
		cin >> value;

		list.append(value);
	}

	cout << "\nLinked List after append: ";
	list.display();

	cout << "\nEnter position to insert: ";
	cin >> position;

	cout << "Enter value to insert: ";
	cin >> value;

	list.insert(position, value);

	cout << "Linked List after insert: ";
	list.display();


	cout << "\nEnter position to delete: ";
	cin >> position;

	list.remove(position);

	cout << "Linked List after delete: ";
	list.display();


	return 0;
}