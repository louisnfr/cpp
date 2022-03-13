#!/bin/bash

UNAME=$(uname)

if [ $UNAME = "Darwin" ]
then
	$(sed -i '' '/blueprint/d' $HOME/.zshrc)
	$(rm -rf $HOME/.blueprint)
elif [ $UNAME = "Linux" ]
then
	$(sed -i '/blueprint/d' $HOME/.zshrc)
	$(rm -rf $HOME/.blueprint)
fi
