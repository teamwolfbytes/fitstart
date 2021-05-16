#include <iostream>
#include <vector>
#include <string>
#include "housekeeping.h"
#include "config.h"
#include "exercise.h"
// #include "new.h"

using namespace std;

int exercise_cmd(vector <string> arg_list)
{
	printf("exercise_cmd works\n");
	return 0;
}

cmd_struct subcmds[] = {
	{"config", config_cmd},
	{"exercise", exercise_cmd},
};

int main(int argc, char **argv)
{
	// copy array of array of C strings (cli args) to vector of strings
	vector <string> arg_list (argv, argv + argc);
	run_subcmds(arg_list, subcmds);
}
