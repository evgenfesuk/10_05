// 10_05.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "addArrays.h"


int main()
{
	float arr1[10000];
	float arr2[10000];
	float arr3[10000];

	for (int i = 0; i < 10000; i++)
	{
		arr1[i] = i;
		arr2[i] = i;
	}

	addArrays(arr1, arr2, arr3);

	for (int i = 0; i < 10000; i++)
	{
		std::cout << arr3[i] << std::endl;
	}
	system("pause");
    return 0;
}

