#!/bin/bash

GREEN="\033[1;32m"
YELLOW="\033[1;49;93m"
NOC="\033[0m"

FILE=$(find $@ -type f 2>/dev/null)

if [ -z $@ ]
then
	echo "No file given";
	exit
elif [ -z $FILE ]
then
	echo "$@: No such file or directory";
	exit
fi

echo -e "${GREEN}INPUT:${NOC}"
cat -e $@
echo -e "${YELLOW}OUTPUT:${NOC}"
cat -e "$@.replace"
