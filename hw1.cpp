#include <iostream>
#include <cmath>

using namespace std;

/* Math:
 * a = pi/4
 * c = 2l/a *sin(a/2)
 * r = c/sqrt(2);
 * SA = pi*r*sqrt(r^2 + h^2)
 * h = 30cm (given)
*/

int main(){
	//declare variables
	float l;
	float a = M_PI_4;
	float r;
	float c;
	float SA;
	float h;
	float R;
	//Ask for imput l
	
	cout << "What length L(cm) did you measure: \n";
	cin >> l;
	//compute c
	c= (2*(l)/(a))*sin(a/2);
	//R = c/sqrt(2);
	r = c/2;
	//h = R - R*cos(a/2);
	h = 30;
	SA = M_PI*r*sqrt(pow(r,2) + pow(h,2));
	cout << "surface Area:\n" << SA;
}
