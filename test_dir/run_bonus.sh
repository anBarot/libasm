#!/bin/bash

if [ $(uname) == Linux ]; then
	gcc -Wall -Wextra -Werror -no-pie -Iinclude test_dir/main_bonus.c libasm.a -o ./test_bonus && exit 0
else
	gcc -Wall -Wextra -Werror test_dir/main_bonus.c libasm.a -o ./test_bonus && exit 0
fi