#!/bin/sh
find . -type f,d | wc -l | sed 's/ //g'
