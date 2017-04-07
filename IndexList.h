#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef INDEXLIST_H
#define INDEXLIST_H

int const maxsize = 100;
template<class T, int maxsize>
class indexList {
public:
	T elements[maxsize];    //store elements 
	int size;    //keeps tracks of the size;
	indexList();
	bool append(const int&);
	void selSort();
	void display()const;
};
#endif