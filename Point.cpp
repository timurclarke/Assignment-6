/***
 * Name: Timur Clarke
 * Date: 7/14/2016
 * Description: Point.cpp implementation file
*/
#include "Point.hpp"
#include <iostream>
#include <math.h>
using namespace std;
 
Point::Point() //default constructor, calls setter functions with 0 values for x and y
{
	setXCoord(0);
	setYCoord(0);
}

Point::Point(double xIn, double yIn) //constructor with 2 parameters provided
{
	setXCoord(xIn);
	setYCoord(yIn);
}

void Point::setXCoord(double xIn) //Mutator to set the x coordinate value of a point
{
	XCoord = xIn;
	//cout << "x: " << XCoord << endl; //remove
}

void Point::setYCoord(double yIn) //Mutator to set the y coordinate value of a point
{
	YCoord = yIn;
	//cout << "y: " << YCoord << endl; //remove
}

double Point::getXCoord() //Accessor to get and return x value of a point
{
	return XCoord;
}

double Point::getYCoord() //Accessor to get and return y value of a point
{
	return YCoord;
}

double Point::distanceTo(const Point &toPoint)
{
	double xDist = ( XCoord - toPoint.XCoord ); //Calculate horizontal distance between points and store in xDist
	double yDist = ( YCoord - toPoint.YCoord ); //Calculate vertical distance between points and store in yDist
	
	if (xDist < 0)	//converts negative X distance value to absolute value
		xDist = -xDist;

	if (yDist < 0)	//converts negative Y distance value to absolute value
		yDist = -yDist;

	return sqrt( (xDist * xDist) + (yDist * yDist) ); //returns hypotenuse using Pythagorean theorem
}