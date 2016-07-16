/***
 * Name: Timur Clarke
 * Date: 7/14/2016
 * Description:
 */

#include <iostream>
#include "Point.hpp"
#include "LineSegment.hpp"
using namespace std;

int main()
{
	Point p1(-17.0, 1.5);
	Point p2(-17.0, 10);

	double dist = p1.distanceTo(p2);

	cout << "Distance p1 to p2: " << dist << endl;

	//metro code below

	LineSegment LS(p1, p2);

	//cout << "LS.getEnd1" << LS.getEnd1() << endl;
	//cout << "LS.getEnd1" << LS.getEnd2() << endl;

	double length = LS.length();

	cout << "LS length: " << length << endl;

	double slope = LS.slope();

	cout << "LS slope: " << slope << endl;

	return 0;
}