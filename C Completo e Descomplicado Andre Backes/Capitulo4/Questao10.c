#include <stdio.h>

int main(){

    int x, y, z;

    printf("Digite tres numeros positivos: \n");
    scanf("%d %d %d", &x, &y, &z);
    
    if(x > 0 && y > 0 && z > 0){
        printf("Agora escolha um numero para realizar as medias: 1 - GEOMETRICA - 2 - PONDERADA"
            " - 3 - HARMONICA - 4 - ARITMETICA: \n");

        int escolha;
        scanf("%d", &escolha);

        switch(escolha){
            case 1:{
                int geometrica = x*y*z; 
                printf("MEDIA GEOMETRICA: %d", geometrica);
                break;
            }
            case 2:{
                int ponderada = (x + 2*y + 3*z)/6;
                printf("MEDIA PONDERADA: %d", ponderada);
                break;
            }
            case 3:{
                int harmonica = 1/((1/x)+(1/y)+(1/z));
                printf("MEDIA HARMONICA: %d", harmonica);
                break;
            }
            case 4:{
                int aritmetica = (x+y+z)/3;
                printf("MEDIA ARITMETICA: %d", aritmetica);
                break;
            }
            default:
                printf("Valor escolhido invalido. Apenas 1, 2, 3 e 4 sao permitidos para calcular as medias.");
        }
    }else
        printf("Media invalida. Verifique se digitou os tres numeros positivos.");
        
    return 0;
}
