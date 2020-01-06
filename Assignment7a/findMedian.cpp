/*************************************************************************
 * *Author: Paul Leone
 * * Date: 2/20/2019
 * *Description: This function takes two parameters - an array of int and
 * *		 the size of the array. The function then returns the
 * *		 median of the array.
 * ***********************************************************************/

#include <algorithm>
#include <iostream>

/*************************************************************************
 * This function takes two parameters, which include an array of integers
 * and the size of the array. The function then calculates the median
 * value and returns this value
 * ***********************************************************************/

double findMedian(int array[], int size)
{

	double median;
	int middle;
	
	//this sorts the array in ascending order
	std::sort(array, array + size);

	//the midpoint value of the array is calculates.
	//integer division is used here. Odd numbered arrays
	//will have truncated values.
	middle = (size / 2);

	//If/else statement is used to calculate the median
	//when the array has an even amount of numbers or an
	//odd amount of numbers.
	if(size % 2 == 0)
	{
		//Median for an even number is calculated.
		median = (array[middle] + array[middle - 1]) / 2.0;
	}
	else
	{
		//The calculate median for an odd number
		median = (array[middle]);
	}
	return median;
}
 
