#include <cstdlib>
// Union randomly
#ifndef UF
#define UF

int N;
const int MAX_N = 1e8;

int rep[MAX_N+5];

void init(int n) {
    N = n;
    for(int i = 1; i <= N; i++) {
        rep[i] = i;
    }
}

int getRep(int a) {
    if(rep[a] == a) {
        return a;
    } else {
        return getRep(rep[a]);
    }
}

void join(int a, int b) {
    int rA = getRep(a);
    int rB = getRep(b);
    // Randomly pick between joining A to B and B to A
    if(rand()&1) {
        rep[rB] = rA;
    } else {
        rep[rA] = rB;
    }
}

#endif
