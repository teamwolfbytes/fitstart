#ifndef HOUSEKEEPING_H
#define HOUSEKEEPING_H

#include <vector>
#include <string>

struct fnptr;
struct cmd_struct;
fnptr resolve_subcmds(vector <string> arg_list, cmd_struct subcmds[]);
int run_subcmds(vector <string> arg_list, cmd_struct subcmds[]);

#endif
