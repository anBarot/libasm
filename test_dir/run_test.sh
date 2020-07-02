#!/bin/bash

if [ $(uname) == Linux ]; then
	gcc -Wall -Wextra -Werror -no-pie -I./include test_dir/main.c libasm.a -o ./test && exit 0
else
	gcc -Wall -Wextra -Werror test_dir/main.c libasm.a -o ./test && exit 0
fi