#!/bin/bash

TEMPLATES=$HOME/.blueprint/templates/

echo enter the folder name
read folder

mkdir $folder
mkdir $folder/inc $folder/src

cp $TEMPLATES/Makefile $folder
cp $TEMPLATES/main.cpp $folder/src
cp $TEMPLATES/ClassName.cpp $folder/src
cp $TEMPLATES/ClassName.hpp $folder/inc
