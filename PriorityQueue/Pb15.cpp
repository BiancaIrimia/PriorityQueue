// PriorityQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PriorityQueue.h"


PriorityQueue creareCoada()
{
	PriorityQueue q;
	int nr=0, c=0, p=0;
	cout << "Creati coada de prioritati:\n";
	cout << "Introduceti numarul de elemente:\n"; cin >> nr;
	cout << "Introduceti elementele:\n";

	for (int i = 0; i < nr; i++)
	{
		cout << "Valoare: ";
		cin >> c;
		cout << "Prioritate: ";
		cin >> p;
		q.insertElem(c, p);
	}
	q.constrHeap();
	return q;
}

void meniu()
{
	cout << endl;
	cout << "1)Inserati element\n";
	cout << "2)Afisati elementul maxim\n";
	cout << "3)Extract max\n";
	cout << "4)Afisare heap\n";
	cout << "5)Creste prioritatea\n";
	cout << "0)Exit\n";
}

void run()
{
	PriorityQueue q=creareCoada();
	int nr = 0, c=0, n=0, x=-1;

	meniu();

	while (x != 0)
	{
		cout << endl;
		cout << "Introduceti comanda dorita: ";
		cin >> x;


		if (x == 1)
		{
			int v = 0, p = 0;
			cout << "Introduceti valoarea:";
			cin >> v;
			cout << "Introduceti prioritatea: ";
			cin >> p;
			q.insertElem(v, p);
		}

		if (x == 2)
		{
			cout << q.elemMax();
		}
		if (x == 3)
		{
			cout << q.deleteElem();
		}
		if (x == 4)
		{
			for (int i = 0; i < q.getsize(); i++)
				cout << q.getElem(i) ;
		}
		if (x == 5)
		{
			int i = 0, p = 0, val = 0;
			cout << "Indicele elementului: "; cin >> i; cout << endl;
			cout << "Valoarea:"; cin >> val; cout << endl;
			cout << "ID prioritate noua: "; cin >> p;
			
			q.increaseKey(val, p, i - 1);
		}
	}
}

int main()
{
    

	run();
	

}
