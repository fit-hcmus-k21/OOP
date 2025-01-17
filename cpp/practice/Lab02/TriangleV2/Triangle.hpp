#ifndef _TRIANGLE_HPP
#define _TRIANGLE_HPP

#include "Point.hpp"
#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    private:
        Point *_a;
        Point *_b;
        Point *_c;
    public:
        // Constructors
        Triangle ();
        Triangle (Point *a, Point *b, Point *c);

        // Destructor
        ~Triangle ();

        // Getters and setters
        Point getA ();
        Point getB ();
        Point getC ();
        void setA (Point *a);
        void setB (Point *b);
        void setC (Point *c);

        // Other methods
        float getArea ();
        float getPerimeter ();
        friend ostream& operator << (ostream& os, const Triangle *t);
        friend istream& operator >> (istream& is, Triangle*& t);
};

#endif