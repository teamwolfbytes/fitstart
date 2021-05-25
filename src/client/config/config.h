#ifndef CONFIG_H
#define CONFIG_H

int change_cmd(std::vector <std::string> arg_list);
extern struct cmd_struct config_subcmds[];
int config_cmd(std::vector <std::string> arg_list);

#endif
