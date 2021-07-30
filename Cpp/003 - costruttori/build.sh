#! /bin/bash

g++ threevars.cpp -o threevars 2>buildlog.log
./threevars
rm threevars
