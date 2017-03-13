// Union by rank only
#ifndef UF
#define UF

int N;
const int MAX_N = 1e8;

int rep[MAX_N+5];
int s[MAX_N+5];

void init(int n) {
    N = n;
    for(int i = 1; i <= N; i++) {
        rep[i] = i;
        s[i] = 0;
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
    if(s[rA] > s[rB]) {
        rep[rB] = rA;
    } else if(s[rA] < s[rB]) {
        rep[rA] = rB;
    } else {
        // Same rank, join A->B
        rep[rA] = rB;
        s[rB]++;
    }
}

#endif
