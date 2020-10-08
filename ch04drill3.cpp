#include "std_lib_facilities.h"

int main()
{
	string unit ="";

	double szam = 0, max = 0, min = 0, count = 0, sum = 0;



	constexpr double cm_per_m = 100, cm_per_inch=2.54, inch_per_feet = 12;

	cout << "Please enter the numbers with their units(cm, m, in, ft)\n";

	vector<double> szamok;

	while(cin >> szam >> unit)
	{
		if(unit != "cm" && unit!="m" && unit!="in" && unit!="ft") error("Illegal representation of unit.");

		count++;

		if(min == 0)
			min=szam;

		if(unit =="cm")
			szam=szam/cm_per_m;

		if(unit =="in")
			szam=szam*cm_per_inch/cm_per_m;

		if(unit =="ft")
			szam=szam*inch_per_feet*cm_per_inch/cm_per_m;

		if (szam > max)
			max=szam;

		if(szam <min)
			min=szam;

		sum+=szam;

		szamok.push_back(szam);
		
	}

	cout << "The smallest value is: "<< min << " m\nThe largest value is: "<< max <<" m" << endl;
	cout << "The number of values is: "<< count << "\nThe sum of values is: "<< sum <<" m" << endl;

	sort(szamok);
	for(double numbers : szamok)
		cout << numbers << " m" << endl;
	return 0;
}