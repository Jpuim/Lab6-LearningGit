#ifndef SQUARE_H
#define SQUARE_H

typedef struct {
    double m_side;

    void setSide(double side) { m_side = side; }
    double getArea() { return side * side; }
} Square;

#endif