#pragma once
#include "figure.h"
#include <math.h>

class Dot : public Figure 
{
private:
	int x, y;
public:
	Dot(int _x, int _y) : x(_x), y(_y) {}; 
	double getSquare();
	double getPerimeter();
	int getType(); 
	int* getCoordinates(); 

};

class Line : public Figure 
{
private:
	int x0, y0, x1, y1;
public:
	Line(int _x0, int _y0, int _x1, int _y1) : x0(_x0), y0(_y0), x1(_x1), y1(_y1) {}; 
	double getSquare();
	double getPerimeter();
	int getType(); 
	int* getCoordinates(); 
	double getLength(); 
};

class Circle : public Figure 
{
private:
	int x, y, radius;
public:
	Circle(int _x, int _y, int _radius) : x(_x), y(_y), radius(_radius) {}; 
	double getSquare();
	double getPerimeter();
	int getType(); 
	int* getCoordinates(); 
};

class Triangle : public Figure
{
private:
	int a, b, c; 
public:
	Triangle(int _a, int _b, int _c) : a(_a), b(_b), c(_c) {};
	double getSquare();
	double getPerimeter();
	int getType(); 
	int* getCoordinates();
};

class Square : public Figure
{
private:
	int x, y, width;
public:
	Square(int _x, int _y, int _width) : x(_x), y(_y), width(_width) {};
	double getSquare();
	double getPerimeter();
	int getType(); 
	int* getCoordinates(); 
};


class Rectangle : public Figure
{
private:
	int x, y, width, height;
public:
	Rectangle(int _x, int _y, int _width, int _height) : x(_x), y(_y), width(_width), height(_height) {};
	double getSquare() override;
	double getPerimeter() override;
	int getType() override; 
	int* getCoordinates() override; 
};


class Cube : public Figure
{
private:
	int x, y, z, edge;
public:
	Cube(int _x, int _y, int _z, int _edge) : x(_x), y(_y), z(_z), edge(_edge) {};
	double getSquare();
	double getPerimeter();
	int getType(); 
	int* getCoordinates(); 
};