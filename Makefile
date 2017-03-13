all: path-compression union-by-rank union-by-random both

path-compression: path-compression.cpp
	g++ main.cpp path-compression.cpp -O2 -std=c++11 -o $@

union-by-rank: union-by-rank.cpp
	g++ main.cpp union-by-rank.cpp -O2 -std=c++11 -o $@

union-by-random: union-by-random.cpp
	g++ main.cpp union-by-random.cpp -O2 -std=c++11 -o $@

both: both.cpp
	g++ main.cpp both.cpp -O2 -std=c++11 -o $@

clean:
	rm path-compression union-by-rank union-by-random both
