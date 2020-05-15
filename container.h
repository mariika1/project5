#pragma once
#include "figures.h"
#include <malloc.h>
#include <string>
#include <iostream>

class Container
{
private:
	int maxsize;
	Figure** values;
	int size = 0;
public:
	Container(int sz);
	int Size();
	void double_size(); 
	void push_back(Figure* targ); 
	void delete_element(Figure* targ); 
	void delete_element_by_id(int id); 
	Figure** get_elements(); 
	Figure* get_element_by_id(int id); 
	Container& operator=(Container targ); 
};

void PrintContainer(Container cont);