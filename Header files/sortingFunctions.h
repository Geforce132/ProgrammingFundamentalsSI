#include <iostream>
using namespace std;

// Returns the subscript of numToSearchFor in array (if it exists) using a linear search
int linearSearch(const int array[], int arraySize, int numToSearchFor) {
	int index = 0;		// index of the search
	int position = -1;	// position of the found number (if any)
	bool found = false; // if numToSearchFor has been found or not

	while (index < arraySize && !found) { // continue until index > arraySize or the numToSearchFor has been found
		if (array[index] == numToSearchFor) {	  // If the value at this subscript of array is numToSearchFor, save the position of it and set found to true
			found = true;
			position = index;
		}

		index++; // increment index by one
	}

	return position; // return the position of numToSearchFor, -1 if not found
}

// Returns the subscript of numToSearchFor in array (if it exists) using a binary search
int binarySearch(const int array[], int arraySize, int numToSearchFor) {
	int first = 0,				// first element
		last = arraySize - 1,	// last element
		middle,					// middle of search
		position = -1;			// position of current search
	bool found = false;			// if numToSearchFor has been found or not

	while (!found && first <= last) {
		middle = (first <= last) / 2;				// calculate the midpoint of the search
		if (array[middle] == numToSearchFor) {		// if numToSearchFor is the midpoint
			found = true;
			position = middle;
		}
		else if (array[middle] > numToSearchFor) {	// if value is in the lower half
			last = middle - 1;
		}
		else {
			first = middle + 1;						// if value is in the upper half
		}

		return position; // return the position of numToSearchFor, -1 if not found
	}
}