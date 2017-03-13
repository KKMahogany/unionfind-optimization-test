#include <iostream>
#include <cstdlib>
#include <vector>
#include "uf.h"

using namespace std;
using pii = pair<int,int>;

vector<pii> queries;

int randint(int a, int b) {
    int delta = (b-a+1);
    return a + rand()%delta;
}

int main(int argc, char* argv[]) {
    if(argc != 4) {
        cerr << "Usage: " << argv[0] << " <N> <Q> <seed>\n";
        exit(1);
    }
    int N = stoi(argv[1]);
    int Q = stoi(argv[2]);
    int seed = stoi(argv[3]);
    
    srand(seed);
    
    // Make queries
    for(int i = 0; i < Q; i++) {
        int x = randint(1, N-1);
        int y = randint(x+1, N);
        queries.emplace_back(x, y);
    }

    // Initialise UF
    init(N);
    
    // Make the queries
    for(auto q: queries) {
        join(q.first, q.second);
    }

    return 0;
}
