#pragma once
#include "Shape.h"
#include <iostream>
#include <cmath>

using namespace std;


class Cylinder:public Shape
{
protected:
	double radius{};
	double height{};
	double pi{ 3.142 };


public:
	virtual double CalcSurfaceArea() override;
	virtual double CalcShapeVolume() override;
	void SetClassName();
	string GetClassName();
	Cylinder(double radius = 0,double height = 0);
	~Cylinder();
};

