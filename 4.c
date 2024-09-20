#include <stdio.h>

   int main() {
       int eleitores, brancos, nulos, validos;
       float percBrancos, percNulos, percValidos;
       printf("Digite o número total de eleitores: ");
       scanf("%d", &eleitores);
       printf("Digite o número de votos brancos: ");
       scanf("%d", &brancos);
       printf("Digite o número de votos nulos: ");
       scanf("%d", &nulos);
       printf("Digite o número de votos válidos: ");
       scanf("%d", &validos);
       percBrancos = (brancos / (float)eleitores) * 100;
       percNulos = (nulos / (float)eleitores) * 100;
       percValidos = (validos / (float)eleitores) * 100;
       printf("Percentual de votos brancos: %.2f%%\n", percBrancos);
       printf("Percentual de votos nulos: %.2f%%\n", percNulos);
       printf("Percentual de votos válidos: %.2f%%\n", percValidos);
       return 0;
   }
