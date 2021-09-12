#include "Cuboid.h"
#include "Shape.h"
#include <iostream>

using namespace std;

Cuboid::Cuboid(double given_length, double given_breadth, double given_height)
	:length{given_length}, breadth{given_breadth}, height{given_height}
{
}

Cuboid:: ~Cuboid()
{
}
//Cuboid: Surface Area = 6 x L x B; Volume = L x B x W

double Cuboid::CalcSurfaceArea () {
	surface_area = 6 * length * breadth;
	return surface_area;
}

double Cuboid::CalcShapeVolume() {
	volume = length * breadth * height;
	return volume;
}

void Cuboid::SetClassName() {
	name = "CUBOID";
}

string Cuboid::GetClassName() {
	return name;
}