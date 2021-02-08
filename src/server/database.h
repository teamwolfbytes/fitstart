#include <cstdio>
#include <array>

using namespace std;

FILE *read;
FILE *write;
read = fopen("data.txt", "r");
write = fopen("data.txt", "w");

struct usr {
	array <char, 32> username;
	array <char, 64> email;
	int age = 0;
	int xp = 0;
	array <int, 128> friend_list;
	// profile pic
	// int id = 0;
};

usr get_usr(int id)
{
	usr user;
	read >> user;
	return user;
}

void add_usr(int id)
{
	usr user;
	write << user;
}
