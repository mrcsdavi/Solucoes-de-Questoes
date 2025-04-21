#include <stdio.h>

int main(){

    int N, fatorial=1;
    float E = 0;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){    
        fatorial *= i;
        E += 1.0/fatorial;
    }
    
    printf("Somatorio do E: %f\n", E);

    return 0;
}
