/*  Este programa tiene el propósito de indicar cuál(es) de los n números que el usuario proporcione son únicos.
 *
 *  Nombre: Alejandro Ernesto Ramírez Michel
 *  Fecha: 15 de octubre del 2018
 */

#include <stdio.h>

int main() {
    //variables
    int a;
    int b;
    int contar = 0;
    //Primero pregunto al usuario cuántos números introducirá
    int cant;

    //pregunto al usuario cuántos números introducirá
    printf("Hello, user. How many numbers are you going to introduce? \n");
    scanf("%i", &cant);

    //ahora pongo variable donde se almacenarán los números dados
    int num [cant];

    //aquí pido los números
    for (int i=0; i<cant; i++) {
        printf("Give me the number you'd like: \n");
        scanf("%i", &num[i]);                           //se almacenarán en [i]
    }

    printf("\n");

    //aqui le mando al usuario los elementos únicos en el array
    printf("The unique numbers in the array you gave me are: ");
    for(int i = 0; i < cant; i++) {
        contar=0;                      //"contar" es donde se almacenan, empieza en 0
        if(num[i] == num[i-1]) {
            contar++;
        }
        for(a = 0; a < i; a++) {
            if(num[i] == num[a]) {
                contar++;
            }
        }
        for(b = i+1; b < cant; b++) {
            if(num[i] == num[b]) {
                contar++;
            }
        }
        if(contar == 0) {
            printf("%i ", num[i]);
        }
    }

    return 0;
}