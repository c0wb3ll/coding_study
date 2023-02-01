#!/bin/bash

prob_num=$1
template_file="./template/main.cpp"

if [ $# -eq 1 ]
then
    mkdir ${prob_num}
    cp ${template_file} ./${prob_num}/main.cpp
else
    echo "usage)"
    echo "  ./prob_maker.sh {prob_num}"
fi