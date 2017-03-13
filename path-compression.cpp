// Path compression only
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
        return rep[a] = getRep(rep[a]);
    }
}

void join(int a, int b) {
    int rA = getRep(a);
    int rB = getRep(b);
    // Join A to B
    rep[rA] = rB;
}

#endif
