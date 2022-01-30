#!/bin/bash
make
echo 
./Converter m
echo 
./Converter a
echo 
./Converter 1
echo 
./Converter 12
echo 
./Converter 123123123123
echo
./Converter 99999999999999
echo 
./Converter 123.123
echo 
./Converter 123.123f
echo 
./Converter 123.0f
echo 
./Converter nanf
echo 
./Converter nan
echo 
./Converter +inf
echo 
./Converter -inff
echo 
./Converter asdasdasdasd
echo 
./Converter
echo 
./Converter 12 13