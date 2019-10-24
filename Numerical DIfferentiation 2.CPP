//Numerical Differentiation

#include <conio.h>
#include <iostream.h>
#include <math.h>
#include <iomanip.h>

void main () {
clrscr();
double x,h,f,b,c,tv,error;

cout << "Input X = ";
cin >> x;
cout << "Input H = ";
cin >> h;

cout.setf(ios::fixed);
cout.precision(4);

tv = cos(x);
f = (sin(x+h) -sin(x)) / h;
b = (sin(x) - sin(x-h)) / h;
c = (sin(x+h) - sin(x-h)) / (2*h);

cout << "\n\n";

error = fabs(((tv - f) / tv) * 100);
cout << "Forward Difference  : " << setw(8) << f << setw(10) << error << "%" << endl;
error = fabs(((tv - b) / tv) * 100);
cout << "Backward Difference : " << setw(8) << b << setw(10) << error << "%" << endl;
error = fabs(((tv - c) / tv) * 100);
cout << "Central Difference  : " << setw(8) << c << setw(10) << error << "%" << endl ;

getch();
}