#include <stdio.h>

   int main() {
       int num;
       printf("Digite um n�mero: ");
       scanf("%d", &num);
       printf("O antecessor de %d � %d\n", num, num - 1);
       return 0;
   }
