#!/bin/bash
# Simple auto-compile and run basic.c without extra libraries

last_mod=0

while true; do
    mod=$(stat -c %Y basic.c)
    if [[ $mod != $last_mod ]]; then
        clear
        gcc basic.c -o basic && ./basic
        last_mod=$mod
    fi
    sleep 1
done