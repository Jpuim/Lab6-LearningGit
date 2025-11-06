#ifndef SQUARE_H
#define SQUARE_H

typedef struct {
    double m_side;
} Square;

void setSide(Square* sq, double side);
double getSide(const Square* sq);
double getArea(const Square* sq);

#endif