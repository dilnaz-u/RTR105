#!/bin/bash

pwd >> log.txt
ls >> lod.txt
mkdir mydi >> log.txt
cd mydi >> log.txt
echo -e "hello\v\tworld!" >> a.txt
cp a.txt ..\b.txt
cd ..
rmdir mydi >> log.txt
rm -r mydi >> log.txt

