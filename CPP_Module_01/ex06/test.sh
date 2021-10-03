#!/bin/bash
make
echo "-------DEBUG-------"
./karenFilter DEBUG
echo 
echo "-------INFO--------"
./karenFilter INFO
echo 
echo "------WARNING------"
./karenFilter WARNING
echo 
echo "-------ERROR-------"
./karenFilter ERROR
echo 
echo "-------TRASH-------"
./karenFilter "[ Probably complaining about insignificant problems ]"
echo "-------------------"
