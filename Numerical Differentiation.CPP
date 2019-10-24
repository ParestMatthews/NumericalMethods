#include <iostream.h>
#include <conio.h>
#include <math.h>



int main ()
{
clrscr();
float x, h, a, b, c,d,e,f,true;

cout<<"Y = ln(x)"<<endl;
cout<<"Enter Value of X: ";
cin>>x;
cout<<endl<<"Enter Value of H: ";
cin>>h;

true = 1/x;
cout<<endl<<"True Value: "<<true<<endl;

cout<<endl<<"Forward Difference: 	Backward Difference:	Central Difference";
a = (log(x+h)-log(x))/h;
b = (log(x)-log(x-h))/h;
c = (log(x+h)-log(x-h))/(2*h);
cout.precision(4);
cout<<endl<<a<<"			"<<b<<"			"<<c;
d = ((true-a)/true)*100;
d = fabs(d);
e = ((true-b)/true)*100;
e = fabs(e);
f = ((true-c)/true)*100;
f = fabs(f);
cout<<endl<<endl<<"Percentage Error: ";
cout.precision(2);
cout<<endl<<d<<"%			"<<e<<"%			"<<f<<"%";

getch ();
return 0;


}