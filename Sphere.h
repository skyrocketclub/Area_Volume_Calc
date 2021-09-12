#pragma once
#include "Shape.h"
#include <iostream>
#include <string>

using namespace std;

class Sphere:public Shape
{
protected:
	double radius{};
	double height{};
	double pi{ 3.142 };

public:
	//Initialization to zero by default
	Sphere(double radius = 0, double height = 0);
	~Sphere();
	virtual double CalcSurfaceArea()override;
	virtual double CalcShapeVolume()override;
	void SetClassName();
	string GetClassName();
};

