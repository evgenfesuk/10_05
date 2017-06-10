#include "stdafx.h"
#include <iostream>
#include "addArrays.h"

void addArrays(float* arr1, float* arr2, float* arr3)
{
	for (int i = 0; i < 3; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}
}

