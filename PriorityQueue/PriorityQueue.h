#pragma once
#include <iostream>
#include "Element.h"
using namespace std;

class PriorityQueue
{
private:
	Element *heap;
	int capacity;
	int size;
public:
	PriorityQueue();
	int getsize();
	Element getElem(int i);
	Element elemMax();
	void insertElem(int val, int p);
	Element deleteElem();
	void increaseKey(int val,int p, int i);
	void maxHeap(int i);
	void constrHeap();
	~PriorityQueue();

	
};

