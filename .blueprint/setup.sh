#!/bin/bash

if [ -d "$HOME/.blueprint" ]
then
	echo "blueprint already installed"
else
	cp -r ../.blueprint ~
	echo "blueprint installed"
	zsh
fi

CHECK=$(grep -c blueprint "$HOME/.zshrc")

if [ $CHECK -eq 0 ]
then
	echo "alias blueprint=\"bash ~/.blueprint/blueprint.sh\"" >> ~/.zshrc
	echo "alias bp=\"blueprint\"" >> ~/.zshrc
fi

