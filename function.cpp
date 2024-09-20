#include "function.h"

void fillArrInt(int arr[], const int &size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
	}
}

void fillArrDouble(double arr[], const int& size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = (double)(rand()) / (double)(rand());
	}
}

void fillArrChar(char arr[], const int& size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 127;
	}
}



void ShowArrInt(int arr[], const int& size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " | ";
	}
	cout << endl;
}

void ShowArrDouble(double arr[], const int& size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " | ";
	}
	cout << endl;
}

void ShowArrChar(char arr[], const int& size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " | ";
	}
	cout << endl;
}




int FindMinValueInt(int arr[], const int& size) {
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Min value: " << min << endl;
	return min;
}

float FindMinValueDouble(double arr[], const int& size){
	double  min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Min value: " << min << endl;
	return min;
}

char FindMinValueChar(char arr[], const int& size) {
	char min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Min value: " << min << endl;
	return min;
}




int FindMaxValueInt(int arr[], const int& size) {
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Max value: " << max << endl;
	return max;
}

float FindMaxValueDouble(double arr[], const int& size) {
	double max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Max value: " << max << endl;
	return max;
}

char FindMaxValueChar(char arr[], const int& size) {
	char max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Max value: " << max << endl;
	return max;
}




void SortArrInt(int arr[], const int& size) {
	for (int i = 1; i < size; i++)
	{
		int sorted = i - 1;
		while (sorted > -1 && arr[sorted] > arr[sorted + 1])
		{
			int temp = arr[sorted];
			arr[sorted] = arr[sorted + 1];
			arr[sorted + 1] = temp;
			sorted--;
		}
	}
}

void SortArrDouble(double arr[], const int& size) {
	for (int i = 1; i < size; i++)
	{
		int sorted = i - 1;
		while (sorted > -1 && arr[sorted] > arr[sorted + 1])
		{
			double temp = arr[sorted];
			arr[sorted] = arr[sorted + 1];
			arr[sorted + 1] = temp;
			sorted--;
		}
	}
}

void SortArrChar(char arr[], const int& size) {
	for (int i = 1; i < size; i++)
	{
		int sorted = i - 1;
		while (sorted > -1 && arr[sorted] > arr[sorted + 1])
		{
			char temp = arr[sorted];
			arr[sorted] = arr[sorted + 1];
			arr[sorted + 1] = temp;
			sorted--;
		}
	}
}




void ChangeArrInt(int arr[], const int& size) {
	int choose{ 0 };
	int newValue{ 0 };
	cout << "Какое значение вы хотите изменить (Введите его порядковый номер): ";
	cin >> choose;
	cout << "Введите новое значение: ";
	cin >> newValue;
	choose--;
	arr[choose] = newValue;
}

void ChangeArrDouble(double arr[], const int& size) {
	int choose{ 0 };
	double newValue{ 0 };
	cout << "Какое значение вы хотите изменить (Введите его порядковый номер): ";
	cin >> choose;
	cout << "Введите новое значение: ";
	cin >> newValue;
	choose--;
	arr[choose] = newValue;
}

void ChangeArrChar(char arr[], const int& size) {
	int choose{ 0 };
	char newValue{ 0 };
	cout << "Какое значение вы хотите изменить (Введите его порядковый номер): ";
	cin >> choose;
	cout << "Введите новое значение: ";
	cin >> newValue;
	choose--;
	arr[choose] = newValue;
}