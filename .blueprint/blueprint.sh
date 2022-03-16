#!/bin/bash

TEMPLATES="$HOME/.blueprint/templates/"
UNAME=$(uname)

echo "what do you want to do?"
echo "1. create a folder"
echo "2. add a class to the project"
read choice

if [ "$choice" == "1" ]
then
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
elif [ "$choice" == "2" ]
then
	echo "class name?"
	read name

	cp $TEMPLATES/Class.cpp src/$name.cpp
	cp $TEMPLATES/Class.hpp inc/$name.hpp

	if [ "$UNAME" == "Darwin" ]
	then
		$(gsed -i "s/Class/${name}/g" src/$name.cpp)
		$(gsed -i "s/Class/${name}/g" inc/$name.hpp)
		upper_name=$(echo $name | tr a-z A-Z)
		$(gsed -i "s/CLASS/${upper_name}/g" inc/$name.hpp)
		$(gsed -i '16i\ \t'"$name"'.cpp\t\t\\' Makefile)
	elif [ "$UNAME" == "Linux" ]
	then
		$(sed -i "s/Class/${name}/g" src/$name.cpp)
		$(sed -i "s/Class/${name}/g" inc/$name.hpp)
		upper_name=$(echo $name | tr a-z A-Z)
		$(sed -i "s/CLASS/${upper_name}/g" inc/$name.hpp)
		$(sed -i '16i\ \t$'"$name"'.cpp\t\t\\' Makefile)
	fi
else
	echo "wrong input"
fi
