/***
 * Name: Timur Clarke
 * Date: 7/14/2016
 * Description: LineSegment.h header file
*/
#ifndef LINESEGMENT_H
#define LINESEGMENT_H
#include "Point.hpp"

class LineSegment
{
private:
	Point point1;
	Point point2;
	
public:
	LineSegment(Point p1, Point p2);
	void setEnd1(Point inPoint1);
	void setEnd2(Point inPoint2);
	Point getEnd1();
	Point getEnd2();
	double length();
	double slope();	
};
#endif