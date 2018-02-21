// aud.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#define ARR_SIZE 5

int main()
{
	SetConsoleOutputCP(1251);
	int arr[ARR_SIZE];
	printf("Введите числа: ");
	for (int i = 0; i < ARR_SIZE; i++) {
		scanf_s("%d", &arr[i]);
	}
	int MAX = arr[0];
	int MIN = arr[0];
	for (int i = 1; i < ARR_SIZE; i++) {
		if (MAX < arr[i]) {
			MAX = arr[i];
		}
		if (MIN > arr[i]) {
			MIN = arr[i];
		}
	}
	printf("MAX is %d, MIN is %d\n", MAX, MIN);
	system("pause");
	return 0;
}
