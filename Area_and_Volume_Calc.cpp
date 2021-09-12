// Area_and_Volume_Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shape.h"
#include "Cuboid.h"
#include "Cylinder.h"
#include "Sphere.h"

/*
        Write a C++ program and setup a class Shape that has a dummy member functions 
            -- CalcSurfaceArea
            -- CalcShapeVolume
        that are meant to calculate surface areas and volumes of closed 3 - dimensional objects.

        From the class derive three more classes
            -- Sphere
            -- Cylinder
            -- Cuboid
        that redefine the base class functions to calculate the surface areas and volumes of the three objects.

        Also have all the data members initialized to zero using default and to a preset value using parameter constructors.

        Include in the derived classes
            -- SetClassName
            -- GetClassName
        functions where ClassName is Sphere or Cylinder or Cuboid that set or get members of the classes and PrintCLassName
        that prints the data members of the classes on the screen...


        In the main function, instantiate three objects of type Sphere, CYlinder and Cuboid and calculate
            -- their surface areas
            -- their volumes
        using the principle of polymorphism and display the final results on the screen. Take the following formulae for the objects as shown
        below:

        Sphere Surface Area = 4*pi*r ; Volume = (4/3) * pi * r^3
        Cylinder: Surface Area = 2*pi*(r^2 + r*h); Volume = pi * r^2 * h
        Cuboid: Surface Area = 6 x L x B ; Volume = L x B x W

        where r and h represents the radius and height of a circular object and L,B, and W are the length, Breadth and Width of rectangular
        object. Use SI units for dimensions of the objects


        */
int main()
{
    //initializing variables
    double surface_area_1{}, surface_area_2{}, surface_area_3{};
    double volume_1{}, volume_2{}, volume_3{};

    //instantiating a cylinder, cuboid and a Sphere
    Cylinder Shape_1(10.0, 5.0);//A cylinder with radius of 10cm and a height of 5cm
    Cuboid Shape_2(5.0, 5.0, 5.0);
    Sphere Shape_3(10.0, 5.0);
    
    //Setting the names of the three shapes (these functions have been defined in the respective classes)
    Shape_1.SetClassName();
    Shape_2.SetClassName();
    Shape_3.SetClassName();

    //for the cylinder
    surface_area_1 = Shape_1.CalcSurfaceArea();
    volume_1 = Shape_1.CalcShapeVolume();
    std::cout << "The Surface area of the " << Shape_1.GetClassName() << " is " << surface_area_1<< " cm^2"<<std::endl;
    std::cout << "The volume of the " << Shape_1.GetClassName() << " is " << volume_1 << " cm^3" << std::endl;
    std::cout << endl;

    //for the Cuboid
    surface_area_2 = Shape_2.CalcSurfaceArea();
    volume_2 = Shape_2.CalcShapeVolume();
    std::cout << "The Surface area of the " << Shape_2.GetClassName() << " is " << surface_area_2 << " cm^2" << std::endl;
    std::cout << "The volume of the " << Shape_2.GetClassName() << " is " << volume_2 << " cm^3" << std::endl;
    std::cout << endl;

    //for the Sphere
    surface_area_3 = Shape_3.CalcSurfaceArea();
    volume_3 = Shape_3.CalcShapeVolume();
    std::cout << "The Surface area of the " << Shape_3.GetClassName() << " is " << surface_area_3 << " cm^2" << std::endl;
    std::cout << "The volume of the " << Shape_3.GetClassName() << " is " << volume_3 << " cm^3" << std::endl;
    std::cout << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
