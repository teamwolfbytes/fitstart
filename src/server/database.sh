#!/bin/sh

# simply grep for user
get_user()
{
	grep "^\<$1\>" $2
}

# find user, get line number, and replace replacee with replacer
put_user()
{
	grep -n "^\<$1\>" $2 | cut -d : -f 1 | sed -i "$(cat /dev/stdin) s/.*/$3/" $2
}

# add user
add_user()
{
	printf "%s\n" $1 >> $2
}

read func database username replacer
$func $database $username $replacer
