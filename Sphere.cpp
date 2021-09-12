#include "Sphere.h"

//The constructor that assigns the values by default
Sphere::Sphere(double given_radius, double given_height)
	:radius{given_radius}, height{given_height}
{

}

Sphere::~Sphere() {

}

//Sphere Surface Area = 4 * pi * r; Volume = (4 / 3) * pi * r ^ 3
double Sphere::CalcSurfaceArea() {
	surface_area = 4 * pi * radius;
	return surface_area;
}

double Sphere::CalcShapeVolume() {
	volume = (4 / 3) * pi * pow(radius, 3);
	return volume;
}

void Sphere::SetClassName() {
	name = "SPHERE";
}

string Sphere::GetClassName() {
	return name;
}