#include <iostream>
#include <vector>

using namespace std;

struct pers_info {
	string email = "";
	int age = 0;
	
};

struct usr {
	string usrname = "";
	pers_info info;
	vector <int> friend_list;
	// profile pic
	// int id = 0;
	int xp = 0;
};

void make_usr(vector <usr> &userlist, string username)
{
	usr user;
	user.usrname = username;
	userlist.push_back(user);
	// cout << "username: " << user.usrname << '\n';
	// cout << "size now: " << userlist.size() << '\n';
}

// add return codes for failure, out of bounds, etc.
// somehow combine the two updates later
int update_usrname(vector <usr> &userlist, int id, string username)
{
	userlist[id].usrname = username;
	
	return 0;
}

int update_usr_xp(vector <usr> &userlist, int id, int xp)
{
	userlist[id].xp = xp;
	
	return 0;
}

void print_usrs(vector <usr> userlist)
{
	for (int i = 0; i < userlist.size(); ++i) {
		// cout << "printing stuff\n";
		cout << userlist[i].usrname << ' xp: ' << userlist[i].xp << '\n';
	}
	cout << '\n';
}

int main() {
	usr user;
	// vector for now
	vector <usr> users;
	char cmd = '\0';
	string tmp = "";
	int id = 0;
	int i = 0;
	while (true) {
		cout << "type commands\n";
		cin >> cmd;
		switch (cmd) {
		// quit program
		case 'q':
			return 0;
		// make user
		case 'm':
			cout << "write username\n";
			cin >> tmp;
			make_usr(users, tmp);
			break;
		// update name
		case 'n':
			cout << "id and name\n";
			cin >> id >> tmp;
			update_usrname(users, id, tmp);
			break;
		// update xp
		case 'x':
			cout << "id and xp\n";
			cin >> id >> i;
			update_usr_xp(users, id, i);
			break;
		// print list of users
		case 'p':
			print_usrs(users);
			break;
		}
	}
	return 0;
}
