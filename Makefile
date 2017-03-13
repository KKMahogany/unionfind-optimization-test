all: uf1 uf2 uf3

uf1: uf1.cpp
	g++ main.cpp uf1.cpp -O2 -std=c++11 -o $@

uf2: uf2.cpp
	g++ main.cpp uf2.cpp -O2 -std=c++11 -o $@

uf3: uf3.cpp
	g++ main.cpp uf3.cpp -O2 -std=c++11 -o $@

clean:
	rm uf1 uf2 uf3
