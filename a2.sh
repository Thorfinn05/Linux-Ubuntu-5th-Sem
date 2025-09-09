#!/bin/bash

if [ -z "$1" ]; then
    read -p "Enter year (press Enter to use current year): " year
    # If user input is empty, use current year
    if [ -z "$year" ]; then
        year=$(date +%Y)
    fi
else
    year=$1
fi

if (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))); then
    echo "$year is a leap year."
else
    echo "$year is not a leap year."
fi

