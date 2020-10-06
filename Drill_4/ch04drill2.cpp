#include "std_lib_facilities.h"

int main()
{
	double szam=0, max=numeric_limits<double>::min(), min=numeric_limits<double>::max();
	
	bool b1 = false;

	cout << "Please enter numbers: \n";

	/*cin >> szam;

	min = szam, max = szam;

	cout << szam << " is the largest and the smallest number so far.\n";*/


	while(cin >> szam)
	{
		b1 = false;

		cout << szam ;

		if (szam > max)
		{
			max=szam;
			cout << " is the largest so far.\n";
			b1 = true;
		}
		if(szam <min)
		{
			min=szam;
			cout << " is the smallest so far.\n";
			b1 = true;
		}

		if(b1==false)
			cout << endl;
	}

	return 0;
}