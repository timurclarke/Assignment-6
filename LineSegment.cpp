/***
 * Name: Timur Clarke
 * Date: 7/14/2016
 * Description: LineSegment.cpp
*/
 using namespace std;
 #include "LineSegment.hpp"
 //#include "Point.hpp"
 #include <iostream>
 

LineSegment::LineSegment(Point p1, Point p2)
{
	setEnd1(p1);
	setEnd2(p2);
	//cout << "p1.getXCoord" << p1.getXCoord() << endl;
}

void LineSegment::setEnd1(Point p1)
{
	point1 = p1;
}

void LineSegment::setEnd2(Point p2)
{
	point2 = p2;
}

//below here is metro code

Point LineSegment::getEnd1()
{
	return point1;
}

Point LineSegment::getEnd2()
{
	return point2;
}

double LineSegment::length()
{
	return point1.distanceTo(point2);
}

double LineSegment::slope()
{
	double xDist = ( point2.getXCoord() - point1.getXCoord() );
	double yDist = ( point2.getYCoord() - point1.getYCoord() );

	cout << "slope: xdist, ydist: " << xDist << " " << yDist << endl;

	return (yDist / xDist);
}