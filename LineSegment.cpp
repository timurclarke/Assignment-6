/***
 * Name: Timur Clarke
 * Date: 7/14/2016
 * Description: LineSegment.cpp
*/
#include "LineSegment.hpp"
#include <iostream>
using namespace std; 

LineSegment::LineSegment(Point p1, Point p2) //constructor, takes in 2 Point values as parameters, uses them to set endpoints
{
	setEnd1(p1);
	setEnd2(p2);
}

void LineSegment::setEnd1(Point p1) //setter to first endpoint
{
	point1 = p1;
}

void LineSegment::setEnd2(Point p2) //setter for second endpoint
{
	point2 = p2;
}

Point LineSegment::getEnd1() //get method to return Point endpoint1
{
	return point1;
}

Point LineSegment::getEnd2() //get method to return Point endpoint2
{
	return point2;
}

double LineSegment::length()
{
	return point1.distanceTo(point2); //calculate/return distance between endpoints using distanceTo() Point function
}

double LineSegment::slope() //calculate/return slope of line segment, rise over run or y distance / x distance
{
	double xDist = ( point2.getXCoord() - point1.getXCoord() ); //horizontal distance between 2 points
	double yDist = ( point2.getYCoord() - point1.getYCoord() ); //vertical distance between 2 points

	return (yDist / xDist);
}