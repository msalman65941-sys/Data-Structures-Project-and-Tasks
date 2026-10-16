#include<iostream>
using namespace std;

int main()
{
	int arr1[25], arr2[25], temp[25];
	for (int i = 0; i < 25; i++)
	{
		arr1[i] = i + 1;
		arr2[i] = (i + 1) * 10;
	}
	cout << "Before Swapping Array:" << endl;
	cout << "Array 1:";
	for (int i = 0; i < 25; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	cout << "Array 2:";
	for (int i = 0; i < 25; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 25; i++)
	{
		temp[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp[i];
	}
	cout << "After Swaping Array" << endl;
	cout << "Array 1:";
	for (int i = 0; i < 25; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	cout << "Array 2:";
	for (int i = 0; i < 25; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	return 0;
}
