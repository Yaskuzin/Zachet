//
// Created by M17-612 on 19.12.2017.
//

#ifndef ZACHET_SPHERE_H
#define ZACHET_SPHERE_H

#include "Form.h"
#include "Point.h"
#include <vector>
#include <math.h>
#include <ostream>
#define PI 3.14159265

class Sphere : public Form{
private:
    double radius;
public:
    vector<Point> points45;
    Sphere();

    Sphere(double radius);

    double getVolume(int n) override;

    friend std::ostream &operator<<(std::ostream &os, const Sphere &sphere) {
        for (auto it : sphere.points45) {
            os<< it<<endl;
        }
        return os;
    }

    double getRadius() const;

    void setRadius(double radius);
};
#endif //ZACHET_SPHERE_H
