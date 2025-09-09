read -p "Enter number: " n
echo "Multiplication table of $n is: "
for i in {1..10}
do
	pd=$((n*i)); echo "$n * $i = $pd"
done 
