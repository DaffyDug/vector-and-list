#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
using namespace std;

template <typename T>
T* resize(T* arr, int& size, int count) //O(N)
{
	T* newArray = new T[size + count];
	for (int i = 0; i < size; i++)
	{
		//newArray[i] = arr[i];
		*(newArray + i) = *(arr + i);
	}
	delete[] arr;
	size += count;
	return newArray;
}

template <typename T>
T* push_back(T* arr, int& size, const T& value)
{
	T* newArray = resize(arr, size, 1);
	newArray[size - 1] = value;
	return newArray;
}

void show(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{/*
	int arraySize = 10;
	int* array = new int[arraySize] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};*/
	//show(array, arraySize);
	//array = push_back(array, arraySize, 34);
	//show(array, arraySize);
	//cout << arraySize;
	/*vector<int> v1 = { 1,2,3,4,5 };
	v1.reserve(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(8);
	cout << v1.size() << ' ' << v1.capacity();*/
	// динамический массив vector (с# List<>, pyton tuple)
	// список list (python list)
	list<int> l1;
	l1.push_back(15);
	l1.pop_front();


}
