#include <iostream>
#include <string>
#include "IndexList.h"
using namespace std;

template<class T, int maxsize>
indexList<T, maxsize>::indexList(){
	size = 0;  //List is empty
}

template<class T, int maxsize>
bool indexList<T, maxsize>::append(const int& item) {
	bool result;   //used to check if the item was added or not
	if(size < maxsize) {
		elements[size] = item;
		size++;
		result = true;
	}
	else {
		cerr << "CANNOT APPEND THE ITEM, THE ARRAY IS FULL!";
			result = false;
	}
	return result;
}

template<class T, int maxsize>
void indexList<T, maxsize>::display()const {
	for (int i = 0; i < size; i++)
		cout << elements[i] << ", ";
}

template<class T, int maxsize>     //SelSort not implemented
void indexList<T, maxsize>::selSort() {}

