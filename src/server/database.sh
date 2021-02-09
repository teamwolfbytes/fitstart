#!/bin/bash

function get_user
{
	grep -F "$1" data.txt
}

get_user $1
