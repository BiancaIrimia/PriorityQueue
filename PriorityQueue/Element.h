#pragma once
#include <iostream>
using namespace std;

class Element
{
private:
	int priority;
	int value;
public:
	Element();
	Element(int v, int p);
	Element(const Element &e);
	int getPriority();
	int getValue();
	void setPriority(int p);
	void setValue(int p);
	Element operator=(const Element &e);
	friend ostream &operator<<(ostream &os,const Element &e);
	~Element();
};

