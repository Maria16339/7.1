#include <iostream>
#include <array>
#include <ctime>
using namespace std;
void create(array<int, 100>& arr, int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}
void print(array<int, 100> arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

double avg(array<int, 100> arr, int n)
{
	int min = arr[0];
	for (int i = 0; i < arr[i]; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	int max = arr[0];
	for (int i = 0; i < arr[i]; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	int count = 0;
	double summ = 0;
	for (int i = 0; i < n; i++)
		summ = max + min;
	return summ / 2;
}
int main()
{
	srand((unsigned int)time(NULL));
	int n;
	cout << "n = "; cin >> n;
	array<int, 100 > arr = { 0 };
	create(arr,n);
	print(arr,n);
	cout << "arithmetic mean = " << avg(arr, n) << endl;
	return 0;
}