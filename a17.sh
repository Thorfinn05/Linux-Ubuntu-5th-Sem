#!/bin/bash
age=20
if [ $age -gt 13 ] && [ $age -lt 18 ]; then
	echo "Young adult"
else
	echo "Not Young adult"
fi
if [ $age -lt 18 ] || [ $age -gt 60 ]; then
	echo "Seat Rserved"
else
	echo "Seat not reserved" 
fi
if [ ! $age -lt 18 ]; then
	echo "Eligible to vote"
else
	echo "Not eligible to vote"
fi
