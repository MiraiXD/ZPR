#!/bin/bash
#commit script arg1 = message arg2..= files

message=$1
shift
while(("$#"))
do
git add "$1"
git commit -m "$message"
git push -u origin master
shift
done