#ifndef HOUSEKEEPING_H
#define HOUSEKEEPING_H

struct fnptr {
	int (*fn)(std::vector <std::string>);
};

struct cmd_struct {
	std::string cmd;
	fnptr func;
};

fnptr resolve_subcmds(std::vector <std::string> arg_list, cmd_struct subcmds[]);
int run_subcmds(std::vector <std::string> arg_list, cmd_struct subcmds[]);

#endif
