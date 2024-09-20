#include <stdio.h>

   int main() {
       int anos, meses, dias, totalDias;
       printf("Digite sua idade em anos: ");
       scanf("%d", &anos);
       printf("Digite os meses: ");
       scanf("%d", &meses);
       printf("Digite os dias: ");
       scanf("%d", &dias);
       totalDias = anos * 365 + meses * 30 + dias;
       printf("Sua idade em dias é %d\n", totalDias);
       return 0;
   }
