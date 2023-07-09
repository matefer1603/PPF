#include <stdio.h>
#include "funciones.h"

int main() {
    Pr prs[mxP];
    int nP = 0;
    char opcion;

    do {
        printf("==== Bienvenido a Smart Tech ====\n");
        printf("==== Elija la opcion requerida ====\n");
        printf("1. Agregar producto\n");
        printf("2. Editar producto\n");
        printf("3. Eliminar producto\n");
        printf("4. Listar productos\n");
        printf("5. Mostrar factura\n");
        printf("6. Salir\n");

        printf("Ingrese una opción: ");
        scanf(" %c", &opcion);

        switch (opcion) {
            case '1':
                aP(prs, &nP);
                break;
            case '2':
                eP(prs, nP);
                break;
            case '3':
                delP(prs, &nP);
                break;
            case '4':
                lP(prs, nP);
                break;
            case '5':
                mostrarFactura(prs, nP);
                break;
            case '6':
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción erronea. Por favor, ingrese otro valor e intente nuevamente.\n");
                break;
        }

        printf("\n");
    } while (opcion != '6');

    return 0;
}