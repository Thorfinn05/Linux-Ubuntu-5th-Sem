read -p "Enter number: " num
if ((num%2==0)); then
	echo -e "$num is even."
else
	echo -e "$num is odd."
fi
