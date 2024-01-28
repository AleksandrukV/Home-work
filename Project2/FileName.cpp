#include<iostream>

using namespace std;

int* CreateArr(int size)
{
	int* arr = new int[size];
	return arr;
}

void InitArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 11;
	}
}

void Delete(int* arr)
{
	delete[] arr;
}

void PrintArr(int* arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int size = 10;
	int* arr = CreateArr(size);
}