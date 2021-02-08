#include <iostream>
#include <fstream>

using namespace std;

struct pers_info {
	string email = "";
	int age = 0;
	// add fitness level
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

// when a user tries to friend someone, they will use a username, not an id.
// we need to be able to map username to id easily
void make_friend(vector <usr> &userlist, int id, int fid)
{
	userlist[id].friend_list.push_back(fid);
}

int check_friend(vector <usr> userlist, int id, int fid)
{
	// yes it's a linear search, but I do not anticipate a user to have
	// enough friends where there is a noticeable difference in speed between
	// algorithms. this way is much simpler and easier to debug in the future
	for (int i = 0; i < userlist[fid].friend_list.size(); ++i) {
		if (userlist[fid].friend_list[i] == id) {
			// if it gets to here, they are friends
			return 0;
		}
	}
	// if it gets to here, that means they are not friends
	// 1 means not friends
	return 1;
}

void print_usrs(vector <usr> userlist)
{
	for (int i = 0; i < userlist.size(); ++i) {
		// cout << "printing stuff\n";
		cout << userlist[i].usrname << " xp: " << userlist[i].xp << '\n';
	}
	cout << '\n';
}

int main()
{
	ofstream write ("test.txt");
	ifstream read;

	write << "World!";
}
