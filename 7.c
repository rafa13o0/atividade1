#include <stdio.h>

   int main() {
       int carrosVendidos;
       float totalVendas, salarioFixo, comissaoFixa, salarioFinal;
       printf("Digite o n�mero de carros vendidos: ");
       scanf("%d", &carrosVendidos);
       printf("Digite o valor total das vendas: ");
       scanf("%f", &totalVendas);
       printf("Digite o sal�rio fixo: ");
       scanf("%f", &salarioFixo);
       printf("Digite o valor da comiss�o fixa por carro vendido: ");
       scanf("%f", &comissaoFixa);
       salarioFinal = salarioFixo + (carrosVendidos * comissaoFixa) + (totalVendas * 0.05);
       printf("O sal�rio final do vendedor �: %.2f\n", salarioFinal);
       return 0;
   }
