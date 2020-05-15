#pragma once
#include <malloc.h>



class Figure
{ 
public:
	virtual double getSquare() = 0; 
	virtual double getPerimeter() = 0; 
	virtual int getType() = 0; 
	virtual int* getCoordinates() = 0; 
};