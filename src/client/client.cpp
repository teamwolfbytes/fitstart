#include <iostream>
#include <settings.h>
#include <new.h>

using namespace std;

int main(int argc, char **argv)
{
	if (argv[1] == "settings") {
		if (argv[2] == "change") {
			if 

	} else if (argv[1] == "new") {
		// init
	} else if (argv[1] == "exercise") {
		// exercise
	}
	switch (cmd) {
	// update name
	case 'n':
		cout << "id and name\n";
		cin >> id >> tmp;
		update_usrname(users, id, tmp);
		break;
	// make friend
	case 'f':
		cout << "user id and new friend id\n";
		cin >> id >> i;
		make_friend(users, id, i);
		break;
	// check friend
	case 'c':
		cout << "user id and friend id\n";
		cin >> id >> i;
		cout << check_friend(users, id, i) << "\n";
	}
	// request exercise
	case 'e':
		cout 
}
