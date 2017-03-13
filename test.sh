#!/bin/bash

make

queries=$((5*10**6))
seed=312876

echo "Path compression ONLY"
time ./uf1 $queries $queries $seed
echo

echo "Union by rank ONLY"
time ./uf2 $queries $queries $seed
echo

echo "Path compression WITH union by (approximate) rank"
time ./uf3 $queries $queries $seed
echo
