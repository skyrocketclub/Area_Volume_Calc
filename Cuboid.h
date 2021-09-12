#pragma once
#include "Shape.h"
#include <iostream>
#include <string>

using namespace std;

class Cuboid:public Shape
{
protected:
	double length{};
	double breadth{};
	double height{};

	

public:
	 double CalcSurfaceArea() override;
	 double CalcShapeVolume() override;
	 void SetClassName();
	 string GetClassName();
	 Cuboid(double lenght = 0, double breadth =0, double height =0);
	~Cuboid();
};

