#!/bin/bash

make

queries=$((1*10**5))
seed=312876

echo "Path compression ONLY"
time ./path-compression $queries $queries $seed
echo

echo "Union by rank ONLY"
time ./union-by-rank $queries $queries $seed
echo

# This is really slow
#echo "Union randomly"
#time ./union-by-random $queries $queries $seed
#echo

echo "Path compression WITH union by (approximate) rank"
time ./both $queries $queries $seed
echo
