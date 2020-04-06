#include "Element.h"


Element::Element()
{
	this->priority = 0;
	this->value = 0;
}
Element::Element(int p, int v)
{
	this->priority = p;
	this->value = v;
}
Element::Element(const Element& e)
{
	this->priority = e.priority;
	this->value = e.value;
}
int Element::getPriority()
{
	return this->priority;
}
int Element::getValue()
{
	return this->value;
}
void Element::setPriority(int p)
{
	this->priority = p;
}
void Element::setValue(int v)
{
	this->value = v;
}
Element Element::operator=(const Element & e)
{
	if (this != &e)
	{
		this->priority = e.priority;
		this->value = e.value;

	}
	return *this;
}
ostream & operator<<(ostream & os,const Element & e)
{
	os << "Valoare: " << e.value << ", " << "prioritate: " << e.priority << endl;
	return os;
}
Element::~Element() {

}


