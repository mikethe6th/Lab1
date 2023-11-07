#include "funciones.h"
int main(){
    int opcion;
    int n1=10;
    int n2=5;

    while (1) {
        printf("Menú:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Salir\n");
        printf("Elija una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                sumar(n1,n2);
                break;
            case 2:
                restar(n1,n2);
                break;
            case 3:
                multiplicar(n1,n2);
                break;
            case 4:
                dividir(n1,n2);
                break;
            case 5:
                printf("Saliendo del programa.\n");
                return 0;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    }
}