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

int FindIndex(int* arr, int size)
{
	int index=0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				index = j;
			}
		}
	}
	return index;
}

int main()
{
	int size = 10;
	int* arr = CreateArr(size);
	InitArr(arr, size);
	PrintArr(arr, size);
	cout << "The index of the smallest number is " << FindIndex(arr, size) << endl;

	Delete(arr);
}