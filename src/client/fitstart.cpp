#include <iostream>
#include <vector>
#include "../housekeeping.h"
#include "config/config.h"
#include "exercise.h"

struct cmd_struct subcmds[] = {
	{"config", config_cmd},
	{"exercise", exercise_cmd},
};

int main(int argc, char **argv)
{
	// copy array of array of C strings (cli args) to vector of strings
	std::vector <std::string> arg_list (argv, argv + argc);
	run_subcmds(arg_list, subcmds);
}
