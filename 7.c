#include <stdio.h>

   int main() {
       int carrosVendidos;
       float totalVendas, salarioFixo, comissaoFixa, salarioFinal;
       printf("Digite o número de carros vendidos: ");
       scanf("%d", &carrosVendidos);
       printf("Digite o valor total das vendas: ");
       scanf("%f", &totalVendas);
       printf("Digite o salário fixo: ");
       scanf("%f", &salarioFixo);
       printf("Digite o valor da comissão fixa por carro vendido: ");
       scanf("%f", &comissaoFixa);
       salarioFinal = salarioFixo + (carrosVendidos * comissaoFixa) + (totalVendas * 0.05);
       printf("O salário final do vendedor é: %.2f\n", salarioFinal);
       return 0;
   }
