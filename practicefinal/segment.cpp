#include <cmath>

// get_x1 method:
double Segment::get_x1()
{ return x1; }

// set_x1 method:
void Segment::set_x1(double x1)
{ this->x1 = x1; }

// setSegment method:
void Segment::setSegment(double x1, double y1, double x2, double y2)
{
  set_x1(x1);
  set_y1(y1);
  set_x2(x2);
  set_y2(y2);
}

// constructor:
Segment::Segment(double x1, double y1, double x2, double y2)
{ setSegment(x1, y1, x2, y2); }

// length:
double Segment::length()
{ return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)); }


