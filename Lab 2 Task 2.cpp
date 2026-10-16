#include<iostream>
using namespace std;

int main()
{
	int arr[7];
	int *p;

	cout << "Enter 7 values:" << endl;
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}
	p = arr;

	int max = *p;
	int min = *p;

	for (int i = 0; i < 7; i++)
	{
		if (*(p + i) > max)
		{
			max = *(p + i);
		}
		if (*(p + i) < min)
		{
			min = *(p + i);
		}
		
	}
	cout << "Maximum= " << max << endl;
	cout << "Minimum= " << min << endl;

	return 0;
}