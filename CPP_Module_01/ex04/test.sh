#!/bin/bash
make
./SedIsForLosers test_files/filename zxc QWE
echo "------------file-----------"
cat test_files/filename
echo "--------file.replace-------"
cat test_files/filename.replace
echo "---------------------------"
echo