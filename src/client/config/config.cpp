#include <iostream>
#include <vector>
#include "config.h"
#include "../housekeeping.h"

int change_cmd(std::vector <std::string> arg_list)
{
	std::cout << "change_cmd works\n";
	return 0;
}

cmd_struct config_subcmds[] = {
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

int config_cmd(std::vector <std::string> arg_list)
{
	std::cout << "config_cmd works\n";
	return run_subcmds(arg_list, config_subcmds);
}
