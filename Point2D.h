#ifndef AP_EX1_POINT2D_H
#define AP_EX1_POINT2D_H

#include "Point.h"

using namespace std;
/**
 * this class derives from the abstract class - "Point"
 * it represents the 2D point type (x,y)
 */
class Point2D : public Point {
private:
    int x;
    int y;
public:
    Point2D(int xAxis, int yAxis);
    ~Point2D(){};
    Point2D(){};
    void print();
    void setPoint(Point* p1);
    void setPoint(int xAxis, int yAxis);
    bool equals(Point* p1);
    Point* plus(Point* p1);
    int getX();
    int getY();
    void printPoint(ostream& os) const;
};
#endif //AP_EX1_POINT2D_H
