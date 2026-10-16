#include<iostream>
using namespace std;

class List
{
private:
	int arr[20];
	int size;
	int n;
public:
	List() { size = 0; }
	void add()
	{
		cout << "How many values you want to enter(Max=20):\n";
		cin >> n;
		cout << "Enter values: \n";
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			size++;
		}
	}
	void display()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
	}
	int length()
	{
		return size;
	}
	void deleteElement()
	{
		int position;
		cout << "\nEnter Position of Element to Delete:\n";
		cin >> position;
			for (int i = position - 1; i < size - 1; i++)
			{
				arr[i] = arr[i + 1];
			}
			size--;
		
	}
};

int main()
{
	List list;
	list.add();
	cout << "Array Display\n";
	list.display();
	cout << "\nLegth Of Array Is: " << list.length();
	list.deleteElement();
	cout << "After Deletetion:\n";
	list.display();
}