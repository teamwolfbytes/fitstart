#include <iostream>
#include <fstream>

using namespace std;

void new_profile()
{
	fstream out;
	out.open("profiles.txt", ios::app);
	string profile;
	string input;

	cout << "Username: ";
	cin >> input;
	profile.append(input);
	profile.append(":");
	cout << "Nickname: ";
	cin >> input;
	profile.append(input);
	profile.append(":");
	cout << "Email: ";
	cin >> input;
	profile.append(input);
	profile.append(":");
	cout << "Age: ";
	cin >> input;
	profile.append(input);
	profile.append(":");

	out << profile;
}
