#!/bin/bash

# simply grep for user
function get-user
{
	grep -F "$1" database
}

# find user, get line number, and replace replacee with replacer
function put-user
{
	record=$(grep -Fn "$1" database | cut -d : -f 1)
	sed -i "\$record /\$3/c\\$4" database
}

function option
{
	case $1 in
		"get-user")
			get-user $2
			;;
		"put-user")
			put-user $2 $3
			;;
	esac
}

# format: command, username, replacer
option $1 $2 $3
