#ifndef CONFIG_H
#define CONFIG_H

#include <iostream>

int change_cmd(vector <string> arg_list)
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

int config_cmd(vector <string> arg_list)
{
	return run_subcmds(arg_list, config_subcmds);
}

#endif