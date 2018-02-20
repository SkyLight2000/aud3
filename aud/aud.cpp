// aud.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int arr[5];
	printf("Введите числа: ");
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	int MAX = arr[0];
	int MIN = arr[1];
	for (int i = 0; i < 5; i++) {
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
