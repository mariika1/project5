#include "container.h"

Container::Container(int sz)
{
	maxsize = sz;
	values = (Figure**)malloc(maxsize * sizeof(Figure*));
}

int Container::Size()
{
	return size;
}

void Container::double_size()
{
	Figure** tmp = (Figure**)malloc(size * sizeof(Figure));
	for (int i = 0; i < size; ++i)
		tmp[i] = values[i];
	free(values);
	maxsize *= 2;
	values = (Figure**)malloc(maxsize * sizeof(Figure*));
	for (int i = 0; i < size; ++i)
		values[i] = tmp[i];
}



void Container::push_back(Figure* targ)
{
	if (size == maxsize)
		this->double_size();
	values[size] = targ;
	size++;
}

void Container::delete_element(Figure* targ)
{
	int i = 0;
	while (values[i] != targ && i < size)
		++i;
	if (i == size)
		return;
	while (i < size - 1)
	{
		values[i] = values[i + 1];
		i++;
	}
	size--;
}

void Container::delete_element_by_id(int id)
{
	while (id < size - 1)
	{
		values[id] = values[id + 1];
		id++;
	}
	delete values[size];
	size--;
}

Figure** Container::get_elements()
{
	return values;
}

Figure* Container::get_element_by_id(int id)
{
	return values[id];
}

Container& Container::operator=(Container targ)
{
	while (this->maxsize < targ.size)
		this->double_size();
	for (int i = 0; i < targ.size; ++i)
		values[i] = targ.values[i];
	return *this;
}

std::string types[] = {
	"dot",
	"line",
	"circle",
	"triangle",
	"square",
	"rectangle",
	"cube"
};

void PrintContainer(Container cont) 
{
	for (int i = 0; i < cont.Size(); ++i)
	{
		Figure* fig = cont.get_element_by_id(i);
		std::cout << "id = " << i << "type = " << types[fig->getType()] << std::endl;
	}
}