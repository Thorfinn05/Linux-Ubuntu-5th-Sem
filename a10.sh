i=1
read -p "Enter number: " n
sum=0
while [ $i -le $n ]
do
	sum=$((sum+i))
	i=$((i+1))
done
echo "Sum is $sum."

