#include<iostream>

using namespace std;

int* CreateArr(int size)
{
	int* arr = new int[size];
	return arr;
}

int main()
{
	int size = 10;
	int* arr = CreateArr(size);
}