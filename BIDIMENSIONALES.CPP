#include <stdio.h>
int main()
{
    int fila, columna;
    int matriz[2][2];
    // Ingresar los valores de la matriz
    for(fila = 0; fila < 2; fila++)
    {
        for(columna = 0; columna < 2; columna++)
        {
            printf("Ingrese el valor [%d][%d]: ", fila, columna);
            scanf("%d", &matriz[fila][columna]);
        }
    }
    // Mostrar la matriz
    printf("\nMatriz ingresada:\n");

    for(fila = 0; fila < 2; fila++)
    {
        for(columna = 0; columna < 2; columna++)
        {
            printf("%d\t", matriz[fila][columna]);
        }
        printf("\n");
    }
    return 0;
}
