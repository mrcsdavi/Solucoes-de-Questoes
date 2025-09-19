/* 14) Crie uma enumeração representando os itens de uma lista de compras.
 Agora, escreva um programa que leia um valor inteiro do teclado e exiba o
 nome do item comprado e o seu preço.*/

 #include <stdio.h>

enum listaCompras {Maca = 1, Banana, Abacate, Manga, Laranja, Morango, Abacaxi 
    };

 int main(){
    int escolha;

    printf("Escolha o produto da sua lista de compras para observar o preco: ");
    scanf("%d", &escolha);

    switch (escolha){
        case Maca: printf("Produto: Maca, 4 reais"); break;
        case Banana: printf("Produto: Banana, 7 reais"); break;
        case Abacate: printf("Produto: Abacate, 13 reais"); break;
        case Manga: printf("Produto: Manga, 7 reais"); break;
        case Laranja: printf("Produto: Laranja, 16 reais"); break;
        case Morango: printf("Produto: Morango, 9 reais"); break;
        case Abacaxi: printf("Produto: Abacaxi, 12 reais"); break;
        default: printf("Produto invalido"); break;
    }

    return 0;
 }
