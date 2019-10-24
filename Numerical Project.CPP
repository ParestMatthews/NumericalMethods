#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

int main()
{
    clrscr();
    double dabox[55][55],a,b;
    float  i, j, k, n;
    char ans;
    cout<<"Enter the number of variables: "<<endl;
    cin>>n;

    cout<<endl<<"Enter the values of your matrix: "<<endl<<endl;
    for(i = 0; i < n ; i++)
    {
      cout<<"Row "<<i+1<<":"<<endl<<endl;
	for(j = 0; j < (n+1); j++)
	{
	    cout<<"Row "<<i+1<<" Column "<<j+1<<": ";
	    cin>>dabox[i][j];
	}
	cout<<endl;

	cout<<"Do you want to continue? [y] [n]"<<endl;
	cin>>ans;


	if (ans == 'y')
	{
	 cout<<endl;
	}
	else if (ans == 'n')
	{
	 i = i - 1;
	 cout<<endl;
	}
    }

    for(i = 0; i < n; i++)
    {
       for(j = 0; j < n; j++)
       {
	    if(i != j)
	    {
		a = dabox[j][i];
		b = dabox[i][i];

		for(k = 0; k < n+1; k++)
		{
		    dabox[j][k] = dabox[j][k] - (a/b) * dabox[i][k];

		}
	    }

	}

    }



    cout<<endl<<endl<<"Gauss Jordan Process: "<<endl;
    for(i = 0; i < n; i++)
    {
	 a = dabox[i][i];
	for(int j = 0; j < n+1; j++)
	{
	    dabox[i][j] /= a;
	    cout.setf(ios::fixed);
	    cout<<setw(5)<<setprecision(1)<<dabox[i][j]<<" ";
	}
	cout<<endl;
    }




    cout<<"Answer per variable: "<<endl<<endl;

    for (i = 0; i < n; i++)
    {
	cout<<"X"<<i+1<<": "<<dabox[i][n]<<endl;

    }
getch();
    return 0;
}