/*11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida,
 calcule o quadrado de cada elemento desse vetor, armazenando esse
 resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos.
 Imprima os dois conjuntos de números*/

 #include <stdio.h>

 int main(){

    float vetor1[20];
    float vetor2[20];

    for(int i = 0; i < 20; i++){
        scanf("%f", &vetor1[i]);
        vetor2[i] = vetor1[i] * vetor1[i];
    }

    for(int i = 0; i < 20; i++){

        printf("%.2f\n", vetor1[i]);

        printf("%.2f\n", vetor2[i]);
    }

    return 0;
 }
