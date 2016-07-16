/***
 * Name: Timur Clarke
 * Date: 7/14/2016
 * Description: Point.h header file
*/
#ifndef POINT_H
#define POINT_H

class Point
{
private:
	double XCoord;
	double YCoord;
public:
	Point();
	Point(double xIn, double yIn);
	void setXCoord(double xIn);
	void setYCoord(double yIn);
	double getXCoord();
	double getYCoord();
	double distanceTo(const Point &toPoint);
};
#endif