//
// keyboardCommand
//


#include <stdio.h>
#include <windows.h>

int main() {
    printf("Pressione as teclas 'X' ou 'Z' para continuar...\n");

    // Loop infinito até a tecla 'X' ou 'Z' ser pressionada
    while (1) {
        // Verifica se a tecla 'X' (código 0x58) ou 'Z' (código 0x5A) foi pressionada
        if (GetAsyncKeyState(0x58)) { // Tecla 'X'
            printf("Tecla 'X' pressionada!\n");
            break;
        }

        if (GetAsyncKeyState(0x5A)) { // Tecla 'Z'
            printf("Tecla 'Z' pressionada!\n");
            break;
        }

        // Fazer algo enquanto espera (opcional)
    }

    return 0;
}
