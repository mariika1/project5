#include "container.h"
#include "figure.h"
#include "figures.h"
#include <iostream>

using namespace std;

int main()
{
	Container cont(10);

	Dot* a = new Dot(0, 0);
	Circle* c = new Circle(1, 1, 5);
	cont.push_back(a);
	cont.push_back(c);
	cout << cont.get_element_by_id(1)->getCoordinates()[0] << endl;

	Container cont2(1);
	cont2 = cont;
	cout << cont2.get_element_by_id(1)->getCoordinates()[1] << endl;

	cont.push_back(new Rectangle(10, 10, 30, 50));

	cont.delete_element(c);

	PrintContainer(cont);

}