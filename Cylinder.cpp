#include "Cylinder.h"

Cylinder::Cylinder(double given_radius, double given_height)
	:radius{given_radius}, height{given_height}
{

}

Cylinder::~Cylinder() {};

//Cylinder: Surface Area = 2 * pi * (r ^ 2 + r * h); Volume = pi * r ^ 2 * h
double Cylinder::CalcSurfaceArea() {
	surface_area = 2 * pi * (pow(radius,2) + radius * height);
	return surface_area;
}

double Cylinder::CalcShapeVolume() {
	volume = pi * pow(radius, 2) * height;
	return volume;
}

void Cylinder::SetClassName() {
	name = "CYLINDER";
}

string Cylinder::GetClassName() {
	return name;
}