#!/bin/bash

TEMPLATES="$HOME/.blueprint/templates/"

echo "how many folders?"
read i

while [ $i -gt 0 ]
do
	echo "folder number?"
	read number

	FOLDER="ex$number"

	mkdir $FOLDER
	mkdir $FOLDER/inc $FOLDER/src

	cp $TEMPLATES/Makefile $FOLDER
	cp $TEMPLATES/main.cpp $FOLDER/src
	cp $TEMPLATES/Class.cpp $FOLDER/src
	cp $TEMPLATES/Class.hpp $FOLDER/inc

	((i--))
done
