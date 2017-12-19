//
// Created by M17-612 on 19.12.2017.
//



#include <cstdlib>
#include <time.h>
#include "Sphere.h"

Sphere::Sphere() {}

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

Sphere::Sphere(double radius) : radius(radius) {
    Point *point1 = new Point(radius * sin(PI / 4), radius * sin(PI / 4), radius * sin(PI / 4));
    Point *point2 = new Point(radius * sin(PI / 4), -radius * sin(PI / 4), radius * sin(PI / 4));
    Point *point3 = new Point(radius * sin(PI / 4), radius * sin(PI / 4), -radius * sin(PI / 4));
    Point *point4 = new Point(radius * sin(PI / 4), -radius * sin(PI / 4), -radius * sin(PI / 4));
    Point *point5 = new Point(-radius * sin(PI / 4), -radius * sin(PI / 4), -radius * sin(PI / 4));
    Point *point6 = new Point(-radius * sin(PI / 4), -radius * sin(PI / 4), radius * sin(PI / 4));
    Point *point7 = new Point(-radius * sin(PI / 4), radius * sin(PI / 4), -radius * sin(PI / 4));
    Point *point8 = new Point(-radius * sin(PI / 4), radius * sin(PI / 4), radius * sin(PI / 4));

    points45.push_back(*point1);
    points45.push_back(*point2);
    points45.push_back(*point3);
    points45.push_back(*point4);
    points45.push_back(*point5);
    points45.push_back(*point6);
    points45.push_back(*point7);
    points45.push_back(*point8);

}

double Sphere::getVolume(int n) {
    int count =0;

    for(int i=0;i<n;i++){
        double x = fRand(-radius, radius);
        double y = fRand(-radius, radius);
        double z = fRand(-radius, radius);
        Point *point = new Point(x,y,z);
        if (sqrt(x*x+y*y+z*z) < radius) {
            count++;
        }
    }
    return count/(double)n * 8*radius*radius*radius;
}

double Sphere::getRadius() const {
    return radius;
}

void Sphere::setRadius(double radius) {
    Sphere::radius = radius;
}


