#include <stdio.h>


int main() {
    // Movimento da Torre usando 'for'
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");  // Torre anda para a direita
    }
    
    printf("\n");

    // Movimento do Bispo usando 'while'
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");  // Bispo anda na diagonal superior direita
        j++;
    }

    return 0;
}
