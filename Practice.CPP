#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <iomanip.h>

float function(float x)
{
 return((2*(x*x*x)-(11.7*(x*x))+(17.7*(x))-5));
}


float derivative(float y)
{
 return((6*(y*y)-(23.4*(y))+17.7));
}


int main ()
{
clrscr();
float counta=9999, xo=0, tole=0, xend=0, xofunc=0, xendfunc=0, xodev=0, pere=0;

cout<<"Enter Initial X: ";
cin>>xo;
cout<<"Enter Tolerance: ";
cin>>tole;
cout<<"Xi	Xi+1	f(xi)	f(xi+1)	  %Error"<<endl;
cout.setf(ios::fixed);
cout.precision(4);

for (int i=0;i<counta;i++)
{
  xofunc = function(xo);
  xodev = derivative(xo);
  xend = (xo-(xofunc/xodev));
  xendfunc = function(xend);
  pere = fabs((xend-xo)/xend);



  if (pere <= tole)
  {
   cout<<xo<<"	"<<xend<<"	"<<xofunc<<"	"<<xendfunc<<"	   "<<pere<<"	   	"<<"End"<<endl;
  break;

  }
   else
   {
    cout<<xo<<"	"<<xend<<"	"<<xofunc<<"	"<<xendfunc<<"	   "<<pere<<endl;
    xo = xend;
   }

}


getch ();
return 0;

}
