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
	sed -i "$record s/.*/$2/" database
}

read func username replacer
$func $username $replacer
