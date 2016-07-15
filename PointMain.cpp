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
	Point p1(-1.5, 0);

	Point p2(1.5, 4.0);

	cout << "Distance p1 to p2: " << p1.distanceTo(p2) << endl;

	//metro code below

	LineSegment LS(p1, p2);

	//cout << "LS.getEnd1" << LS.getEnd1() << endl;
	//cout << "LS.getEnd1" << LS.getEnd2() << endl;

	cout << "LS length: " << LS.length() << endl;

	cout << LS.slope() << endl;

	return 0;
}