#include <iostream>
#include <string>
#include "ExtIndexList.h"
#include "ExtIndexList.cpp"
#include "IndexList.h"
#include "IndexList.cpp"
using namespace std;

int main() {

	indexList<int, maxsize>list1;      
	indexList<int, maxsize>list2;
	ExtList<int, maxsize> list3;
	int n;
	int number;
	cout << "List 1 of type ""int""" << endl;
	cout << "Enter number of list items: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter next item: ";
		cin >> number;
		list1.append(number);
	}
	cout << "List 2 of type ""int""" << endl;
	cout << "Enter number of list items: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter next item: ";
		cin >> number;
		list2.append(number);
	}
		list3.append(list1, list2);
		cout << "List 1 concatenated with list2 in list3: \n";
		list3.display();
		list3.selSort();
		cout << "\nList 3 sorted in acending order: \n";
		list3.display();
		
		cout << "\nEnter the number to search in list 3: ";
		cin >> number;
		int index;
		index = list3.Binary(number);
		if (index == -1)
			cout << "Target not found!\n";
		else
		cout << "number " << number << " is found in postion: " << index << endl;
}