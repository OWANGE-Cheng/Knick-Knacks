#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#define UPPER 18.87968
#define BPA 0.0313782
#define e 1.602
using namespace std;

int main()
{
	while(1)
	{
		long double U,q,tg,num,delta;
		cout << "Enter voltage (enter -1 to quit):";
		cin >> U;
	
		if(U==-1)	break;
		else
		{
			cout << "Enter time of falling:";
			cin >> tg;
			q = UPPER / ((tg * sqrt(tg) * U) + tg * U * BPA) * 1000.0;
	
			num = round(q/1.602);
	
			delta = abs(e-(q/num))/e*100;
	
			cout << setprecision(10) << "q=" << q << "e-19" << endl;
			cout << "Electron number¡Ö" << num << endl;
			cout << "Delta=" << delta << "%" << endl;
			cout << endl;
		}
	
		
	}
	system("Pause");
}
