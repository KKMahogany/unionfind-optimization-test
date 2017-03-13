#!/bin/bash

make

queries=$((5*10**6))
seed=312876

time ./uf1 $queries $queries $seed
time ./uf2 $queries $queries $seed
time ./uf3 $queries $queries $seed
