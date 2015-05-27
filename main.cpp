#include <iostream>
#include <string>

using namespace std;

template <typename T>
void sort(T *array, int size)
{
	bool swap = true;
	T temp;
	while (swap)
	{
		swap = false;
		for (int i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				swap = true;
			}
		}
	}
}

int main()
{
	const int arrLength = 10;
	int a[arrLength] = { 1, 3, 5, 7, 9, 0, 2, 7,3 };
	float b[arrLength] = { 1.5, 3.4, 5.8, 72.40, 9.1, 1.0, 222.2, 0.7, 3.5 };
	string c[arrLength] = { "adfg","aafsgadf","ghs","dfash","reaw","dxcb" };

	sort(a, arrLength);
	sort(b, arrLength);
	sort(c, arrLength);


	int i = 0;
	for (i = 0; i < arrLength; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	for (i = 0; i < arrLength; i++)
	{
		cout << b[i] << " ";
	}

	cout << endl;
	for (i = 0; i < arrLength; i++)
	{
		cout << c[i] << " ";
	}


	
	return 0;
}