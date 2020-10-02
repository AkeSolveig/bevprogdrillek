#include "std_lib_facilities.h"

int main()
{
	cout << "\nEnter the name of the person you want to write to!\n";

	string first_name;

	cin >> first_name;

	cout <<"\nEnter one of your friends name!\n";

	string friend_name;

	cin >> friend_name;

	cout << "\nPlease enter an 'm' if the friend is male and an 'f' if the friend is female.\n";

	char friend_sex =0;

	cin >> friend_sex;

	if(friend_sex != 'm' && friend_sex != 'f') error("Please enter a sex from above");

	cout << "\nPlease enter the age of the recipient!\n";

	int age =0;

	cin >> age;

	if (age <= 0 || age >= 110) error("You are kidding!");


	cout << "Dear " << first_name << ",\n";

	cout << "How are you? I am fine. I miss you.\nOne line of my choosing.\nAnd another one.\n";

	cout << "Have you seen " << friend_name <<" lately?\n";

	if (friend_sex == 'm')
		cout <<"If you see him please ask him to call me.\n";

	if (friend_sex == 'f')
		cout <<"If you see her please ask her to call me.\n";

	if (age < 12)
		cout << "Next year you will be " << age+1 << ".\n";

	if (age == 17)
		cout << "Next year you will be able to vote.\n";

	if (age > 70)
		cout << "I hope you are enjoying retirement.\n";

	cout << "Yours sincerely,\n\n\n";

	cout << "Ake Solveig\n";

	return 0;
}
