#include <stdio.h>

   int main() {
       float base, altura, area;
       printf("Digite a base do ret�ngulo: ");
       scanf("%f", &base);
       printf("Digite a altura do ret�ngulo: ");
       scanf("%f", &altura);
       area = base * altura;
       printf("A �rea do ret�ngulo � %.2f\n", area);
       return 0;
   }
