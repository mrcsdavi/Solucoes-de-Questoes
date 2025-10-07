/*16) Elabore uma função que receba como parâmetro um valor
 inteiro n e gere como saída um triângulo lateral formado por
 asteriscos conforme o exemplo a seguir, em que usamos n = 4:
 *
 **
 ***
 ****
 ***
 **
 */

#include <stdio.h>

void triang_Lateral(int n){
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            if(i < n)
                printf("*");
            if (j == n){
                for(int k = 0; k <= n; k++){
                    for(int k1 = 0; k1 <= n-k-1-1; k1++){
                        printf("*");
                    }
                    printf("\n");
                }
                break;
            }
            
        }
        printf("\n");
    }

}

int main(){
    int a;

    printf("Digite um numero para n valores: ");
    scanf("%d", &a);

    triang_Lateral(a);

    return 0;
}
