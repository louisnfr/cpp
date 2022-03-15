#!/bin/bash

if [ -d "$HOME/.blueprint" ]
then
	echo "blueprint folder already installed"
else
	cp -r ../.blueprint ~
	echo "blueprint folder added to $HOME"
fi

CHECK=$(grep -c blueprint "$HOME/.zshrc")

if [ $CHECK -eq 0 ]
then
	echo "alias blueprint=\"bash ~/.blueprint/blueprint.sh\"" >> ~/.zshrc
	echo "alias bp=\"blueprint\"" >> ~/.zshrc
	echo "blueprint commands added to zshrc"
fi

zsh
