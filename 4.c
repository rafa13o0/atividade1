#include <stdio.h>

   int main() {
       int eleitores, brancos, nulos, validos;
       float percBrancos, percNulos, percValidos;
       printf("Digite o n�mero total de eleitores: ");
       scanf("%d", &eleitores);
       printf("Digite o n�mero de votos brancos: ");
       scanf("%d", &brancos);
       printf("Digite o n�mero de votos nulos: ");
       scanf("%d", &nulos);
       printf("Digite o n�mero de votos v�lidos: ");
       scanf("%d", &validos);
       percBrancos = (brancos / (float)eleitores) * 100;
       percNulos = (nulos / (float)eleitores) * 100;
       percValidos = (validos / (float)eleitores) * 100;
       printf("Percentual de votos brancos: %.2f%%\n", percBrancos);
       printf("Percentual de votos nulos: %.2f%%\n", percNulos);
       printf("Percentual de votos v�lidos: %.2f%%\n", percValidos);
       return 0;
   }
