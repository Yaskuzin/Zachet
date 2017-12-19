#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Sphere.h"

int main() {
    srand ( time(NULL));
    Sphere *sphere = new Sphere(10);

    cout<<*sphere<<endl;

    std::cout <<sphere->getVolume(100)<< std::endl;
    std::cout <<sphere->getVolume(100)<< std::endl;
    std::cout <<sphere->getVolume(100)<< std::endl;
    return 0;
}