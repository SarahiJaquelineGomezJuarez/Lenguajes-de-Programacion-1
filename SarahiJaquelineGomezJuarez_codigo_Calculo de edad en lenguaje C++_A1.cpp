/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> // Se incluye de la librería estándar de entrada/salida

int main() { // Funcion principal
    // Paso 1: Pedir el ingreso de un valor (edad)
    float edad; // Se declara la variable 'edad' con float para aceptar números decimales

    // Validación para aceptar números positivos
    while (true) { // Bucle para asegurar una entrada válida
        std::cout << "Ingrese su edad (debe ser un número positivo): "; // Mensaje de solicitud de entrada
        if (!(std::cin >> edad) || edad < 0) { // Validación de la entrada
            std::cin.clear(); // Limpiar el estado de error
            while (std::cin.get() != '\n'); // Limpiar el buffer de entrada y limpia el estado de error de la entrada
            std::cout << "Por favor, ingrese un número válido.\n"; // Mensaje de error, si la entrada es una letra o un caracter diferente de un numero 
        } else {
            break; // Salir del bucle si la entrada es válida
        }
    }

    // Paso 2: Determinar si es mayor de edad o menor de edad, validacion de la entrada, aqui se define si es mayor o menor de edad
    if (edad >= 18.0) {
        // Paso 3: Mostrar en pantalla con su respectivo enunciado
        std::cout << "Usted es mayor de edad." << std::endl; // Este mensaje de salida sera el que de si es mayor de edad, 
    } else {
        // Paso 3: Mostrar en pantalla con su respectivo enunciado, si es menor de edad
        std::cout << "Usted es menor de edad." << std::endl; //Este mensaje de salida sera el que de Mensaje si es menor de edad
    }

    return 0; // Fin del programa con retorno de valor 0, indica que la funcion principal se a terminado.
}
