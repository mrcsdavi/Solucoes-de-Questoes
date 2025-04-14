/* 6) Faça um programa que receba a altura e o sexo de uma pessoa
 e calcule e mostre seu peso ideal, utilizando as seguintes
 fórmulas (em que “h” corresponde à altura):

 • Homens: (72,7 * h) – 58
 • Mulheres: (62,1 * h) – 44,7 */


 int main(){

    float h;
    char sexo;

    printf("Digite o sexo: \n");
    sexo = getchar();
    printf("Digite a altura: \n");
    scanf("%f", &h);
    
    switch (sexo){
        case 'h':{
            float pesoIdeal = (72.7 * h) - 58;
            printf("Homens: %.2f", pesoIdeal);}
            break;
        case 'm':{
            float pesoIdeal = (62.1 * h) - 44.7;
            printf("Mulheres: %.2f", pesoIdeal);
            break;
        }default:
            printf("Sexo invalido. Digite 'm' ou 'h'.");
    }
 }
