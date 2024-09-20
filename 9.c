#include <stdio.h>

   int main() {
       float n1, n2, n3, mediaFinal;
       printf("Digite a primeira nota: ");
       scanf("%f", &n1);
       printf("Digite a segunda nota: ");
       scanf("%f", &n2);
       printf("Digite a terceira nota: ");
       scanf("%f", &n3);
       mediaFinal = (2*n1 + 3*n2 + 5*n3) / 10;
       printf("A média final é: %.2f\n", mediaFinal);
       return 0;
   }
