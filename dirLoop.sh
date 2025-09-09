fset=`ls`
i=1
for j in $fset; do
	echo -e "$i.$j"
	i=$((i+1))
done
