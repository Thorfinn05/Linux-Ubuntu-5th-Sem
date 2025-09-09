dir="/home/thorfinn007/rudra_088"
i=1
for j in "$dir"/*.txt
do
	echo "$i. $j"
	i=$((i+1))
done
