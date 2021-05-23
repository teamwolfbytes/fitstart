#ifndef CONFIG_H
#define CONFIG_H

#include <cstdio>

int change_cmd(vector <string> arg_list);
cmd_struct config_subcmds[];
int config_cmd(vector <string> arg_list);

#endif
