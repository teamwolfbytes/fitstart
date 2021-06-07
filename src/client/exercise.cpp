#include <iostream>
#include <vector>
#include "exercise.h"
#include "../housekeeping.h"

int begin_cmd(std::vector <std::string> arg_list)
{
	std::cout << "begin_cmd works\n";
	return 0;
}

struct cmd_struct exercise_subcmds[] = {
	{"begin", begin_cmd},
};

// void change_nick(string new_nick)
// {
// 	cout << "change_nick " << new_nick << "\n";
// }
// 
// void add_friend(string friend_name)
// {
// 	cout << "add_friend " << friend_name << "\n";
// }

int exercise_cmd(std::vector <std::string> arg_list)
{
	std::cout << "exercise_cmd works\n";
	return run_subcmds(arg_list, exercise_subcmds);
}
