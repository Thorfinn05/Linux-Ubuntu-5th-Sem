#!/bin/bash
read -p "Enter number: " num
org=$num
rev=0
while [ $num -gt 0 ]; do
	digit=$((num%10))
	rev=$((rev*10 + digit))
	num=$((num/10))
done
if [ $org -eq $rev ]; then
	echo -e "PALINDROM"
else
	echo -e "NOT PALINDROM"
fi

