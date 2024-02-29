#!/bin/sh
find . -type f -name '*.sh' | sed "s|.*/||;s|\.sh$||" 
