#include "Square.h"

void setSide(Square* sq, double side) {
    sq->m_side = side;
}

double getSide(const Square* sq) {
    return sq->m_side;
}

double getArea(const Square* sq) {
    return sq->m_side * sq->m_side;
}
