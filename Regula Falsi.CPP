// \"+=-

#include <conio.h>
#include <iostream.h>
#include <math.h>
#include <iomanip.h>

double tv = 0.3604;
double xl, xu, xr, fxl, fxu, fxr,ov, nv, error, tol = 0;
int it = 0;

double function (double in) {
double out;

out = (3*in) +(sin(in)) - (exp(in));

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

cout<< "It      xL      xU      xR   f(xL)   f(xU)   f(xR)   Ap.Err   Rem  TV.Err   Rem \n";

cout.setf(ios::fixed);
cout.precision(4);

while (it >= 0) {
it++;
fxl = function(xl);
fxu = function(xu);
ov = xr;
xr = xu - ((fxu * (xl - xu)) / (fxl - fxu));
nv = xr;
fxr = function(xr);

cout << "\n";
cout << setw(2) << it;
cout << setw(8) << xl;
cout << setw(8) << xu;
cout << setw(8) << xr;
cout << setw(8) << fxl;
cout << setw(8) << fxu;
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
cout << setw(9) << error;
if (error < tol) {
cout << setw(6) << "True";
it = -1;
} else {
cout << setw(6) << "False";
}
}


xl = xr;
}

getch();
}