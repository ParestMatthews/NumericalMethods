#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <iomanip.h>




int main ()
{
clrscr();
  float x[3], y[3], z[3], ans[3], i, q=0, w=0, e=0, iter, uno, dos, tres, v,b,n;
  cout.setf(ios::fixed);
  cout.precision(4);
  cout<<"Enter X values: "<<endl;
  for (i = 0; i < 3; i++)
  {
   cin>>x[i];
  }

 cout<<"Enter Y Values: "<<endl;
  for(i = 0; i <3; i++)
  {
   cin>>y[i];
  }

  cout<<"Enter Z Values: "<<endl;
  for (i = 0; i <3 ; i++)
  {
   cin>>z[i];
	}
   cout<<"Enter Answer per Equation: "<<endl;
   for ( i = 0; i<3; i++)
   {
    cin>>ans[i];
   }

  cout<<endl<<x[0]<<"x + "<<y[0]<<"y + "<<z[0]<<"z = "<<ans[0];
  cout<<endl<<x[1]<<"x + "<<y[1]<<"y + "<<z[1]<<"z = "<<ans[1];
  cout<<endl<<x[2]<<"x + "<<y[2]<<"y + "<<z[2]<<"z = "<<ans[2];

  cout<<endl<<"Enter Number of Tolerance: ";
  cin>>iter;



  for (i = 0; i<iter; i++)
     {
       uno = (ans[0]-(y[0]*w)-(z[0]*e))/x[0];
       v = (uno-q)/uno;
       v = fabs(v);
      
       dos = (ans[1]-(x[1]*q)-(z[1]*e))/y[1];
       b = (dos-w)/dos;
       b = fabs(b);
     
       tres = (ans[2]-(x[2]*q)-(y[2]*w))/z[2];
       n = (tres-e)/tres;
       n = fabs(n);

       e = tres;
       q = uno;
       w = dos;

       cout<<endl<<"Iteration "<<i+1<<": 	%Error: "<<endl<<"X1: "<<q<<"	"<<v<<endl<<"X2: "<<w<<"	"<<b<<endl<<"X3: "<<e<<"	"<<n<<endl;

      }



getch ();
return 0;

}
