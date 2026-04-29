#include <stdio.h>

int main() {
    int N,A,B,C;
    bool n=true;
    scanf("%d", &N);

    for(A=1;A*900<N;A++) {
        for(B=2;B*750<N;B=B+2) {
            for(C=1;C*200<N;C++) {
                if((900*A+750*B+200*C)==N) {
                    if(C<A || C<B) {
                        printf("%d %d %d\n", A,B,C);
                        n=false;
                    }
                }
            }
        }
    }
    if(n)
        printf("none");
    return 0;
}
