#!/bin/bash
message=$1
shift
while(("$#"))
do
git add "$1"
git commit -m "$message"
git push -u origin master
shift
done