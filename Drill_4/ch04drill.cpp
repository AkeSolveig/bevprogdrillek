#include "std_lib_facilities.h"

int main()
{
	double a =0, b=0;
	

	while(cin >> a )
	{

		cout << "a=" << a << " b= " << b << endl;

		if(a < b)
		{
			cout << "The larger value is b: " << b << endl;
			cout << "The smaller value is a: " << a << endl;
		}

		if(b < a) 
		{
			cout << "The larger value is a: " << a << endl;
			cout << "The smaller value is b: " << b << endl;
		}
		if(a == b)
			cout << "The numbers are equal\n";
		if(a !=b)
		{
			if(abs(a-b) <= 0.01)
			cout << "The numbers are almost equal\n";

		}

	}

	return 0;
}