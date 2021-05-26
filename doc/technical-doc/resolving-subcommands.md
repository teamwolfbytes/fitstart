## Preamble

This file explains how `fitstart` resolves subcommmands given in the command line.

You might be wondering why this weird resolving system is used instead of a
simple `case`. The answer is that dealing with a `case` would not be so simple
when the number of commands grow into a very large amount. Each function only
existing the function's parent is (at least I feel is) more wieldy than a
potentially hundreds of lines long `case` statement.

A few definitions before we start:

`fnptr` is simply a struct that contains a function pointer, used to easily
be able to pass function pointers.

`cmd_struct` is a struct that takes the shape of

```
struct cmd_struct {
	string cmd;
	fnptr func;
};
```

`cmd` is a string that is used for matching against input, and `func` is a
function pointer that points to a function. The point of this is so that we
don't have to deal with a ginormous case statement right in the middle of our
code. Instead, one can simply point a function pointer to the function pointed
to by `func` and run that.

### The other preamble

If you haven't yet, please look at the `README` in this directoy.

There are plans to turn this into a manpage, if I ever actually learn how to
write a manpage.

## The actual start

Here is an example tree of fitstart and its commands:
(Some of these have not been implemented yet)

```
                       fitstart
                      /        \
                config          exercise <- runs a function that begins exercise
               /      \
         change        add
        /      \          \
    nick        email      friend
     ^             ^             ^
     |             |              \________
 runs a function   runs a function         \
 that changes the  that changes the    runs a function
 users nickname    users email         that adds a friend
```

One could run `fitstart config change nick <nick>`, where `<nick>` is new
nickname that they would like to have.

Each subcommand (`config`, `exercise`, `change`, `add`, etc.) has its own
header file. Each header file is included in its parent. `config.h` would
include `change.h` and `add.h`. Each header file contains a function
(typically named <subcommand-name>_cmd) and an array of `cmd_struct`s
(typically named <subcommand-subcmds>). The function simply runs `run_subcmds`
on its corresponding subcommands. The input is given by the parent function.

To make this more clear, let's go through what the program does when given
our example command. We want to change our nickname to "foobar" (some of these
commands of not been implemented yet).
`fitstart config change nick foobar`.

First we call `fitstart`, which calls `run_subcmds` with the rest of the string
as input (`config change nick foobar`), and runs it on the current level of
`cmd_struct`s. In this level we have two commands: `config` and `exercise`.
runs run_subcmds with next line of input (change/add) and with cmd_struct
defined in `config.h`. As it scans through the struct, it finds that the input
matches one of the structs: in this case, `config`. Then we continue until
there is no more input.
