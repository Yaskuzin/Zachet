//
// Created by M17-612 on 19.12.2017.
//

#ifndef ZACHET_POINT_H
#define ZACHET_POINT_H
#include <ostream>

class Point{
private:
    double x;
    double y;
    double z;
    double len;
public:
    Point(double x, double y, double z) : x(x), y(y), z(z) {}

    double getX() const {
        return x;
    }

    void setX(double x) {
        Point::x = x;
    }

    double getY() const {
        return y;
    }

    void setY(double y) {
        Point::y = y;
    }

    double getZ() const {
        return z;
    }

    void setZ(double z) {
        Point::z = z;
    }

    double getLen() const {
        return len;
    }

    void setLen(double len) {
        Point::len = len;
    }

    friend std::ostream &operator<<(std::ostream &os, const Point &point) {
        os << "x: " << point.x << " y: " << point.y << " z: " << point.z;
        return os;
    }
};
#endif //ZACHET_POINT_H
