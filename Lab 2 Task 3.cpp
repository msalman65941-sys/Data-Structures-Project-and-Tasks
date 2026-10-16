#include<iostream>
using namespace std;

int main()
{
	int arr[7] = { 1,2,3,4,5,6,7 };
	int* p;
	int choice;

	p = arr;
	cout << "Enter Value To Search: ";
	cin >> choice;

	for (int i = 0; i < 7; i++)
	{
		if (*(p + i)==choice) {
			cout << "Value Found " << *(p + i) << endl;
			cout << "Index: " << i<<endl;
			cout << "Address: " << (p + i) << endl;
			return 0;

		}
	}
	cout << "Value Not Found";

}