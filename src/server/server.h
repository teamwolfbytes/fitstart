#include <iostream>
#include <vector>

struct usr {
	string usrname = "";
	string email = "";
	int age = 0;
	vector <int> friend_list;
	// profile pic
	int xp = 0;
};

void make_usr(vector <usr> &userlist, string username)
{
	usr user;
	user.usrname = username;
	userlist.push_back(user);
}

void update_usr(vector <usr> &userlist, string username, string nusername, string email, int age, int xp)
{
	userlist[username].usrname = nusername;
	userlist[username].email = email;
	userlist[username].age = age;
	userlist[username].xp = xp;
}

void make_friend(vector <usr> &userlist, int username, int fusername)
{
	userlist[username].friend_list.push_back(fusername);
}

int check_friend(vector <usr> userlist, int username, int fusername)
{
	// linear search is super simple. probably won't need to be faster
	for (int i = 0; i < userlist[fusername].friend_list.size(); ++i) {
		if (userlist[fusername].friend_list[i] == username) {
			// if it gets to here, they are friends
			// 0 means they are friends
			return 0;
		}
	}
	// if it gets to here, that means they are not friends
	// 1 means not friends
	return 1;
}

// this function only exists for debugging purposes
void print_usrs(vector <usr> userlist)
{
	for (int i = 0; i < userlist.size(); ++i) {
		// cout << "printing stuff\n";
		cout << userlist[i].usrname << " xp: " << userlist[i].xp << '\n';
	}
}

