#ifndef EXERCISE_H
#define EXERCISE_H

int begin_cmd(std::vector <std::string> arg_list);
extern struct cmd_struct exercise_subcmds[];
int exercise_cmd(std::vector <std::string> arg_list);

#endif
