#include "PriorityQueue.h"


PriorityQueue::PriorityQueue()
{
	this->capacity = 100;
	this->heap = new Element[capacity];
	this->size = 0;
}

int PriorityQueue::getsize()
{
	return this->size;
}

Element PriorityQueue::getElem(int i)
{
	return this->heap[i];
}


Element PriorityQueue::elemMax()
{
	return this->heap[0];
}

void PriorityQueue::insertElem(int val, int p)
{
	heap[size].setPriority(0);
	this->size++;
	increaseKey(val, p, size - 1);

}

Element PriorityQueue::deleteElem()
{
	Element maxim =Element(0,0);
	if (size < 1)
		return Element(0, 0);
	else
	{
		maxim = heap[0];
		heap[0] = heap[size - 1];
		this->size--;
		maxHeap(0);

	}
	return maxim;
}

void PriorityQueue::increaseKey(int val,int p, int i)
{
	//int val = heap[i].getValue();
	if (p < heap[i].getPriority())
		cout << "Valoarea este prea mica..." << endl;
	else {
		heap[i].setPriority(p);
		int k = (i - 1) / 2;
		while (i > 0 && heap[k].getPriority() < p)
		{
			heap[i] = heap[k];
			//heap[i].setPriority(heap[k].getPriority());
			//heap[i].setValue(heap[k].getValue());
			i = k;
			k = (i - 1) / 2;
		}
		heap[i].setPriority(p);
		heap[i].setValue(val);
	}
}

void PriorityQueue::maxHeap(int i)
{
	if (i < size) {
		int st = 2 * i + 1;
		int dr = 2 * i + 2;

		int imax = i;

		if (st<size && heap[st].getPriority()>heap[i].getPriority())
			imax = st;
		if (dr<size && heap[dr].getPriority()>heap[imax].getPriority())
			imax = dr;
		if (imax != i)
		{
			Element aux = heap[imax];
			heap[imax] = heap[i];
			heap[i] = aux;
			maxHeap(imax);
		}


	}
}

void PriorityQueue::constrHeap()
{
	for (int i = size / 2 - 1; i >= 0; i--)
		maxHeap(i);
}
PriorityQueue::~PriorityQueue()
{

}
