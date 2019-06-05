#ifndef TOOL_H
#define TOOL_H
#include "Shape.h"
void insert_sort(Array<Shape*> & a, int n)
{
	for (int i = 1; i < n; i++)
	{
		Shape* temp = a[i];
		int low = 0;
		int high = i - 1;
		while (low <= high)
		{
			int m = (low + high) / 2;
			if (*temp > a[m])
				low = m + 1;
			else high = m - 1;
		}
		for (int j = i - 1; j >= high + 1; j--)
		{
			a[j + 1] = a[j];
		}
		a[high + 1] = temp;
	}
}
#endif
