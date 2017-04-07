#include <iostream>
#include <string>
#include "ExtIndexList.h"
#include "IndexList.h"
using namespace std;

template<class T, int maxsize>       //constructor for the third list
ExtList<T, maxsize>::ExtList() {
	size = 0;
};

template<class T, int maxsize>
bool ExtList<T, maxsize>::append(const indexList& list, const indexList& list2) {   // convine the 2 lists
bool result;
if(size < maxsize) {				//adds the first list
	for (int i = 0; i < list.size ; i++) {
		elements[size] = list.elements[i];
		size++;
	}
	result = true;
}
if (size < maxsize) {				//adds the second list
	for(int i = 0; i < list2.size; i++) {
		elements[size] = list2.elements[i];
		size++;
	}
	result = true;
}
else {                                  //if the array is full display
cerr << "CANNOT APPEND THE ITEM, THE ARRAY IS FULL!";
result = false;
}
return result;
}

template <class T, int maxsize>
void ExtList<T, maxsize>::selSort() {
	int search_index, search_max, temp;
	temp = maxsize - 1; //store the result in the last spot of the array

	for (int current_index = 0; current_index < size; current_index++) {
		search_max = current_index;
		//find index of largest element in unsorted section of elements
		for (search_index = current_index + 1; search_index < size; search_index++)
			if (elements[search_max] > elements[search_index])   //The > operator is overloaded from the employee.cpp
				search_max = search_index;
		//exchange items at position search_max and current index
		if (search_max > current_index) {

			elements[temp] = elements[search_max];
			elements[search_max] = elements[current_index];
			elements[current_index] = elements[temp];

		}
	}
}

template<class T, int maxsize>
int ExtList<T, maxsize>::Binary(int target) {
	int index;
	int Low = 0;
	int Mid, Difference;

	while (Low <= size)
	{
		Mid = (Low + size) / 2;
		Difference = elements[Mid] - target;

		if (Difference == 0) {       
			index = Mid;
			return index;
		}
		else if (Difference < 0)     
			Low = Mid + 1;
		else
			size = Mid - 1;
	}
		index = -1;   // If reach here, Target was not found.
		return index;
	}
