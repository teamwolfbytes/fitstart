#include <vector>
#include <string>
#include "../housekeeping.h"

// todo: deal with non-existent commands (i.e. user error) later
fnptr resolve_subcmds(std::vector <std::string> arg_list, cmd_struct subcmds[])
{
	fnptr ret_f;
	for (int i = 0; i < arg_list.size(); ++i) {
		if (arg_list[1] == subcmds[i].cmd) {
			ret_f.fn = subcmds[i].func.fn;
			return ret_f;
		}
	}
}

int run_subcmds(std::vector <std::string> arg_list, cmd_struct subcmds[])
{
	fnptr func;
	func = resolve_subcmds(arg_list, subcmds);
	arg_list.erase(arg_list.begin());
	return func.fn(arg_list);
}
