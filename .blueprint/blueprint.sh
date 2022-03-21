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
	if [ -z $1 ] && ([ ! -e "Makefile" ] || [ ! -d "src" ] || [ ! -d "inc" ])
	then
		echo "you're not in the right folder"
		exit
	fi

	echo "class name?"
	read name
	up_name=$(echo $name | tr a-z A-Z)

	if [ -z $1 ]
	then
		folder="."
	else
		folder=$1
	fi

	cp $TEMPLATES/Class.cpp $folder/src/$name.cpp
	cp $TEMPLATES/Class.hpp $folder/inc/$name.hpp

	if [ ! -z $1 ]
	then
		$($SED -i "s/Class/$name/g" $folder/src/main.cpp)
	fi
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
	create_folder
	create_class $folder
elif [ "$choice" == "2" ]
then
	create_class ""
else
	echo "wrong input"
fi
