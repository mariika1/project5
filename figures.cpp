#include "figures.h"
#include "figures.h"

double Dot::getSquare()
{
	return 0.0;
}

double Dot::getPerimeter()
{
	return 0.0;
}

int Dot::getType()
{
	return 0;
}

int* Dot::getCoordinates()
{
	int* arr = new int(2);
	arr[0] = x;
	arr[1] = y;
	return arr;
}

double Line::getSquare()
{
	return 0.0;
}

double Line::getPerimeter()
{
	return 0.0;
}

int Line::getType()
{
	return 1;
}

int* Line::getCoordinates()
{
	int* arr = new int(4);
	arr[0] = x0;
	arr[1] = y0;
	arr[2] = x1;
	arr[3] = y1;
	return arr;
}

double Line::getLength()
{
	return sqrt(pow(x0 - x1, 2) + pow(y0 - y1, 2));
}

double Circle::getSquare()
{
	return 3.14 * radius * radius;
}

double Circle::getPerimeter()
{
	return 2 * 3.14 * radius;
}

int Circle::getType()
{
	return 2;
}

int* Circle::getCoordinates()
{
	int* arr = new int(2);
	arr[0] = x;
	arr[1] = y;
	return arr;
}

double Triangle::getSquare()
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double Triangle::getPerimeter()
{
	return a + b + c;
}

int Triangle::getType()
{
	return 3;
}

int* Triangle::getCoordinates()
{
	return nullptr;
}

double Square::getSquare()
{
	return pow(width, 2);
}

double Square::getPerimeter()
{
	return width * 4;
}

int Square::getType()
{
	return 4;
}

int* Square::getCoordinates()
{
	int* arr = new int(2);
	arr[0] = x;
	arr[1] = y;
	return arr;
}


double Rectangle::getSquare()
{
	return width * height;
}


double Rectangle::getPerimeter()
{
	return (width + height) * 2;
}


int Rectangle::getType()
{
	return 5;
}


int* Rectangle::getCoordinates()
{
	int* arr = new int(2);
	arr[0] = x;
	arr[1] = y;
	return arr;
}


double Cube::getSquare()
{
	return 0.0;
}


double Cube::getPerimeter()
{
	return edge * 8;
}


int Cube::getType()
{
	return 6;
}


int* Cube::getCoordinates()
{
	int* arr = new int(3);
	arr[0] = x;
	arr[1] = y;
	arr[2] = z;
	return arr;
}