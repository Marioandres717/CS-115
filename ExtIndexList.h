#pragma once
#include <iostream>
#include <string>
#include "IndexList.h"
using namespace std;

#ifndef EXTINDEXLIST_H
#define EXTINDEXLIST_H

template<class T, int maxsize>
class ExtList : public indexList<T, maxsize> {
public:
	ExtList();
	bool append(const indexList&, const indexList&);
	void selSort();
	int Binary(int);
};

#endif // !EXTINDEXLIST_H
