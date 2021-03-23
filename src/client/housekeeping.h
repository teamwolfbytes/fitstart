#ifndef HOUSEKEEPING_H
#define HOUSEKEEPING_H

#include <vector>
#include <string>

using namespace std;

struct fnptr {
	int (*fn)(vector <string>);
};

struct cmd_struct {
	string cmd;
	fnptr func;
};

// todo: deal with non-exsistent commands (i.e. user error) later
fnptr resolve_subcmds(vector <string> arg_list, cmd_struct subcmds[])
{
	fnptr ret_f;
	for (int i = 0; i < arg_list.size(); ++i) {
		if (arg_list[1] == subcmds[i].cmd) {
			ret_f.fn = subcmds[i].func.fn;
			return ret_f;
		}
	}
}

int run_subcmds(vector <string> arg_list, cmd_struct subcmds[])
{
	fnptr func;
	func = resolve_subcmds(arg_list, subcmds);
	arg_list.erase(arg_list.begin());
	return func.fn(arg_list);
}

#endif
