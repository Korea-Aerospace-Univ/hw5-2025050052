#include <stdio.h>

int main() {
    int N,A,B,C,currect=0;

    scanf("%d", &N);

    for(A=1;A*900<N;A++) {
        for(B=1;B*750<N;B++) {
            for(C=1;C*200<N;C++) {
                if((900*A+750*B+200*C)==N) {
                    if(B%2==0) {
                        if(C<A || C<B) {
                            printf("%d %d %d\n", A,B,C);
                            currect=currect+1;
                        }
                    }
                }
            }
        }
    }
    if(currect==0)
        printf("none");
    return 0;
}
