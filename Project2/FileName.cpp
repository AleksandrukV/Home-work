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

int main()
{
	int size = 10;
	int* arr = CreateArr(size);
}