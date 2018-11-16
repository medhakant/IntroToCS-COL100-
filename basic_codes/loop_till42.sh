read n
declare -i n
while [!($n -eq 42)]
do
echo $n
read n
declare -i n
done