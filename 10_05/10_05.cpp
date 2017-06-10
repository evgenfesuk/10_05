// 10_05.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "addArrays.h"


int main()
{
	float arr1[] = { 1, 2, 3 };
	float arr2[] = { 4, 5, 6 };
	float arr3[3];

	addArrays(arr1, arr2, arr3);

	for (int i = 0; i < 3; i++)
	{
		std::cout << arr3[i] << std::endl;
	}
	system("pause");
    return 0;
}

