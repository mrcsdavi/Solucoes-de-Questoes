/*10) Usando a estrutura “atleta” do exercício anterior, escreva um programa
 que leia os dados de cinco atletas e os exiba por ordem de idade, do mais
 velho para o mais novo*/

 #include <stdio.h>

 struct atleta{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};

 int main(){
    struct atleta a[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o nome do %d° atleta: ", i+1);
        setbuf(stdin, NULL);
        gets(a[i].nome);
        printf("Digite o esporte do %d° atleta: ", i+1);
        gets(a[i].esporte);

        printf("Digite a idade do %d° atleta: ", i+1);
        scanf(" %d", &a[i].idade);
        printf("Digite a altura do %d° atleta: ", i+1);
        scanf(" %f", &a[i].altura);
    }

    int temp;
    for(int i = 0; i < 5; i++){
        for(int j = i; j < 5; j++){
            if(a[j].idade > a[i].idade){
                temp = a[j].idade; 
                a[j].idade = a[i].idade;
                a[i].idade = temp;
            }
        }   
    }

    for(int i = 0; i < 5; i++)
        printf("idade: %d\n", a[i].idade);

    return 0;
 }
