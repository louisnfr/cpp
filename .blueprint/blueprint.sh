#!/bin/bash

TEMPLATES="$HOME/.blueprint/templates/"
UNAME=$(uname)

if [ "$UNAME" == "Darwin" ]
then
	SED="gsed"
elif [ "$UNAME" == "Linux" ]
then
	SED="sed"
fi

create_folder () {
	echo "folder number?"
	read number

	folder="ex$number"
	mkdir $folder
	mkdir $folder/inc $folder/src

	cp $TEMPLATES/Makefile $folder
	cp $TEMPLATES/main.cpp $folder/src
}

create_class () {
	echo "class name?"
	read name

	up_name=$(echo $name | tr a-z A-Z)
	if [ -n $1 ]
	then
		folder=$1
	else
		folder="."
	fi

	cp $TEMPLATES/Class.cpp $folder/src/$name.cpp
	cp $TEMPLATES/Class.hpp $folder/inc/$name.hpp

	$($SED -i "s/Class/$name/g" $folder/src/$name.cpp)
	$($SED -i "s/Class/$name/g" $folder/inc/$name.hpp)
	$($SED -i "s/CLASS/$up_name/g" $folder/inc/$name.hpp)
	$($SED -i '16i\ \t'"$name"'.cpp\t\t\\' $folder/Makefile)
}

echo "what do you want to do?"
echo "1. create a folder"
echo "2. add a class to the project"
read choice

folder=""

if [ "$choice" == "1" ]
then
	echo "how many folders?"
	read i
	while [ $i -gt 0 ]
	do
		create_folder
		create_class $folder
		((i--))
	done
elif [ "$choice" == "2" ]
then
	create_class "."
else
	echo "wrong input"
fi
