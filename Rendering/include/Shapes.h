#pragma once
#include "ImageUtils.h"
#include <array>

// Define the Shape interface
class Shape
{

};

// Class declrations for Circle and Rectangle shapes
class Rectangle
{
    public:
    Rectangle(double cx, double cy, double w, double h) : centre{cx, cy}, width(w), height(h) {}

    bool Intersect(double x, double y)
    {
        double x_min = centre[0]-(width/2), x_max = centre[0]+(width/2);
        double y_min = centre[1]-(height/2), y_max = centre[1]+(height/2);

        return (x >= x_min && x <= x_max && y >= y_min && y <= y_max);
    }

    Colour getColour()
    {
        return colour;
    }

    private:
    Colour colour = Colours::Yellow;
    std::array<double, 2> centre;
    double width;
    double height;
};