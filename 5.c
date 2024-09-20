#include <stdio.h>

   int main() {
       float salario, reajuste, novoSalario;
       printf("Digite o salário atual: ");
       scanf("%f", &salario);
       printf("Digite o percentual de reajuste: ");
       scanf("%f", &reajuste);
       novoSalario = salario + (salario * reajuste / 100);
       printf("O novo salário é: %.2f\n", novoSalario);
       return 0;
   }
