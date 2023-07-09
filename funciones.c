#include <stdio.h>
#include "funciones.h"

void aP(Pr *prs, int *nP) {
    if (*nP == mxP) {
        printf("Se ha alcanzado el límite máximo de productos.\n");
        return;
    }

    Pr nuevoProducto;

    printf("Ingrese el nombre del producto: ");
    scanf("%99s", nuevoProducto.nombre);

    printf("Ingrese la cantidad del producto: ");
    scanf("%d", &nuevoProducto.cantidad);

    printf("Ingrese el precio del producto: ");
    scanf("%f", &nuevoProducto.precio);

    prs[*nP] = nuevoProducto;
    (*nP)++;

    printf("Producto agregado correctamente.\n");
}

void eP(Pr *prs, int nP) {
    if (nP == 0) {
        printf("No hay productos para editar.\n");
        return;
    }

    char nombre[50];
    printf("Ingrese el nombre del producto a editar: ");
    scanf("%49s", nombre);

    for (int i = 0; i < nP; i++) {
        if (strcmp(prs[i].nombre, nombre) == 0) {
            printf("Ingrese la nueva cantidad del producto: ");
            scanf("%d", &prs[i].cantidad);

            printf("Ingrese el nuevo precio del producto: ");
            scanf("%f", &prs[i].precio);

            printf("Producto editado correctamente.\n");
            return;
        }
    }

    printf("No se encontró el producto con el nombre ingresado.\n");
}

void delP(Pr *prs, int *nP) {
    if (*nP == 0) {
        printf("No hay productos para eliminar.\n");
        return;
    }

    char nombre[50];
    printf("Ingrese el nombre del producto a eliminar: ");
    scanf("%49s", nombre);

    for (int i = 0; i < *nP; i++) {
        if (strcmp(prs[i].nombre, nombre) == 0) {
            for (int j = i; j < *nP - 1; j++) {
                prs[j] = prs[j + 1];
            }
            (*nP)--;
            printf("Producto eliminado correctamente.\n");
            return;
        }
    }

    printf("No se encontró el producto con el nombre ingresado.\n");
}

void lP(Pr *prs, int nP) {
    if (nP == 0) {
        printf("No hay productos para listar.\n");
        return;
    }

    printf("==== Lista de productos ====\n");
    printf("Nombre\t\tCantidad\tPrecio\n");

    for (int i = 0; i < nP; i++) {
        printf("%s\t\t%d\t\t%.2f\n", prs[i].nombre, prs[i].cantidad, prs[i].precio);
    }
}

void mostrarFactura(Pr *prs, int nP) {
    if (nP == 0) {
        printf("No hay productos en la factura.\n");
        return;
    }

    printf("==== Bienvenido al sistema de facturación de Smart Tech ====\n");
    printf("Producto\t\tCantidad\tPrecio\n");

    float total = 0.0;
    for (int i = 0; i < nP; i++) {
        printf("%s\t\t%d\t\t%.2f\n", prs[i].nombre, prs[i].cantidad, prs[i].precio);
        total += prs[i].precio * prs[i].cantidad;
    }
    printf("Total\t\t\t\t%.2f\n", total);
}