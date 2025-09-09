read -p "Enter year: " year
if (( (year%4==0 && year%100!=0 || year%400==0) )); then
	echo -e "$year is a leap year."
else
	echo -e "$year is not a leap year."
fi
