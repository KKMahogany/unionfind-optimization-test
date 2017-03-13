// Path compression & Union by (approximate) rank
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
        // This can change the rank of a's representative, but
        // we'll forgo updating the depth becuase it seems non-trivial
        return rep[a] = getRep(rep[a]);
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
