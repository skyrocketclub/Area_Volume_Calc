#pragma once
#include <iostream>
#include <string>


using namespace std;

class Shape
{
protected:
	string name;
	double surface_area{};
	double volume{};

public:
	virtual double CalcSurfaceArea() = 0;
	virtual double CalcShapeVolume() = 0;
	
};

