#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>
#include "housekeeping.h>

int change_cmd(vector <string> arg_list)
{
	std::cout << "change_cmd works\n";
	return 0;
}

int exercise

cmd_struct exercise_subcmds[] = {
	{"change", change_cmd},
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

int exercise_cmd(vector <string> arg_list)
{
	std::cout << "exercise_cmd works\n";
	return run_subcmds(arg_list, exercise_subcmds);
}

#endif
