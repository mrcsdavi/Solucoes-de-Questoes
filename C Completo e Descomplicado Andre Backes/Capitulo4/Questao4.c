/*4) Faça um programa que leia o salário de um trabalhador e o
 valor da prestação de um empréstimo. Se a prestação:

 • For maior que 20% do salário, imprima: “Empréstimo
 não concedido.”
 • Caso contrário, imprima: “Empréstimo concedido.”*/

 #include <stdio.h>

 int main(){

    int salario, valorEmprestimo;

    printf("Digite o seu salario: ");
    scanf("%d %d", &salario, &valorEmprestimo);

    if((valorEmprestimo/salario)*100 > 20){
        printf("Emprestimo nao concedido.");
    }else{
        printf("Emprestimo concedido.");
    }


    return 0;
 }
