#include <stdio.h>

   int main() {
       float salario, reajuste, novoSalario;
       printf("Digite o sal�rio atual: ");
       scanf("%f", &salario);
       printf("Digite o percentual de reajuste: ");
       scanf("%f", &reajuste);
       novoSalario = salario + (salario * reajuste / 100);
       printf("O novo sal�rio �: %.2f\n", novoSalario);
       return 0;
   }
