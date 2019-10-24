// \"+=-

#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
#include <math.h>

double tv = 0.34657;
double xl, xu, xr, fxl, fxu, fxr, ov, nv, tol = 0;
double error = 100;
int it = 0;

double function (double in) {
double out;

out = (exp(2 * in)) - 2;

return(out);
}

void main () {
clrscr();
cout<<"Enter Lower Limit : ";
cin>>xl;
cout<<"Enter Upper Limit : ";
cin>>xu;
cout<<"Set Tolerance : ";
cin>>tol;

cout<< "It      xL      xU      xR   f(xL)   f(xU)   f(xR)  Ap.Err   Rem  TV.Err   Rem \n";

cout.setf(ios::fixed);
cout.precision(4);

while (it >= 0) {
it++;
cout <<"\n";
cout << setw(2) << it;
cout << setw(8) << xl;
cout << setw(8) << xu;
ov = xr;
xr = (xl + xu) / 2;
nv = xr;
cout << setw(8) << xr;
fxl = function(xl);
cout << setw(8) << fxl;
fxu = function(xu);
cout << setw(8) << fxu;
fxr = function(xr);
cout << setw(8) << fxr;

if (it > 1) {
error = ((nv - ov) / nv) * 100;
if (error < 0) {
error = error * -1;
}
cout << setw(8) << error;
if (error < tol) {
cout << setw(6) << "True";
it = -1;
} else {
cout << setw(6) << "False";
}
}

if (it > 1) {
error = ((nv - tv) / tv) * 100;
if (error < 0) {
error = error * -1;
}
cout << setw(8) << error;
if (error < tol) {
cout << setw(6) << "True";
it = -1;
} else {
cout << setw(6) << "False";
}
}

if ((fxl * fxr) > 0) {
xl = xr;
}
if ((fxl * fxr) < 0) {
xu = xr;
}
}
getch();
}