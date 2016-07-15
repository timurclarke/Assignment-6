/***
 * Name: Timur Clarke
 * Date: 7/14/2016
 * Description: Point.cpp implementation file
*/
 using namespace std;
 #include "Point.hpp"
 #include <iostream>
 #include <math.h>
 
Point::Point()
{
	setXCoord(0);
	setYCoord(0);
}

Point::Point(double xIn, double yIn)
{
	setXCoord(xIn);
	setYCoord(yIn);
}

void Point::setXCoord(double xIn)
{
	XCoord = xIn;
	//cout << "x: " << XCoord << endl; //remove
}

void Point::setYCoord(double yIn)
{
	YCoord = yIn;
	//cout << "y: " << YCoord << endl; //remove
}

double Point::getXCoord() //const
{
	return XCoord;
}

double Point::getYCoord() //const
{
	return YCoord;
}

double Point::distanceTo(const Point &toPoint)
{
	//double xDist = ( XCoord - toPoint.getXCoord() );
	//double yDist = ( YCoord - toPoint.getYCoord() );
	double xDist = ( XCoord - toPoint.XCoord );
	double yDist = ( YCoord - toPoint.YCoord );
	/*
	metro revelation for above 2 lines:
	
	double xDist = ( XCoord - toPoint.XCoord );
	double yDist = ( YCoord - toPoint.YCoord );

	or maybe 
	double xDist = ( Point.XCoord - toPoint.XCoord );
	double yDist = ( Point.YCoord - toPoint.YCoord );
	*/

	//cout << "xDist: " << xDist << endl; //remove
	//cout << "yDist: " << yDist << endl; //remove

	if (xDist < 0)	//converts negative X distance value to absolute value
		xDist = -xDist;

	if (yDist < 0)	//converts negative Y distance value to absolute value
		yDist = -yDist;

	//cout << "xDist: " << xDist << endl; //remove
	//cout << "yDist: " << yDist << endl; //remove

	return sqrt( (xDist * xDist) + (yDist * yDist) );
}

/*




Point();
	Point(double xIn, double yIn);
	void setXCoord(double xIn);
	void setYCoord(double yIn);
	double getXCoord();
	double getYCoord();
	double distanceTo(Point &toPoint);

*/