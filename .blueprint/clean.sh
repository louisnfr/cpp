#!/bin/bash

UNAME=$(uname)

if [ $UNAME = "Darwin" ]
then
	$(sed -i '' '/blueprint/d' $HOME/.zshrc)
	$(rm -rf $HOME/.blueprint)
	echo "blueprint uninstalled"
elif [ $UNAME = "Linux" ]
then
	$(sed -i '/blueprint/d' $HOME/.zshrc)
	$(rm -rf $HOME/.blueprint)
	echo "blueprint uninstalled"
fi

