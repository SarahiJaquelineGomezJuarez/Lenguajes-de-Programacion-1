/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream> // Se incluye la librería estándar de entrada/salida
#include <cstdlib>  // Se incluye la librería para la función strtod

int main() { // Función principal
    // Declaración de variables
    double num1, num2;

    // Paso 1: Solicitar el ingreso del primer número
    std::cout << "Escribe el primer número: "; // Mensaje de solicitud de entrada
    std::string input1;// Variable para almacenar la entrada del primer número
    std::cin >> input1;// Se utiliza para recibir la entrada del usuario en este caso el primer número

    // Paso 2: Validar que la entrada sea un número
    char* endptr;// Puntero para la validación de la entrada
    num1 = strtod(input1.c_str(), &endptr);// Convierte la entrada a double y valida que sea un número
    if (*endptr != '\0') {// Validación de la entrada para asegurarse de que sea un número
        std::cout << "Error: '" << input1 << "' no es un número válido." << std::endl;// Mensaje de error si la entrada no es válida
        return 1; // Salir del programa con código de error 1
    }

    // Paso 3: Solicitar el ingreso del segundo número
    std::cout << "Escribe el segundo número: "; // Mensaje de solicitud de entrada
    std::string input2;
    std::cin >> input2;

    // Paso 4: Validar que la entrada sea un número
    num2 = strtod(input2.c_str(), &endptr);
    if (*endptr != '\0') {
        std::cout << "Error: '" << input2 << "' no es un número válido." << std::endl; // Mensaje de error si la entrada no es válida
        return 1; // Salir del programa con código de error 1
    }

    // Paso 5: Realizar las operaciones matemáticas
    double suma = num1 + num2;
    double resta = num1 - num2;
    double multiplicacion = num1 * num2;

    // Paso 6: Verificar si el segundo número es cero antes de realizar la división
    if (num2 != 0) {
        double division = num1 / num2;

        // Paso 7: Mostrar resultados en pantalla
        std::cout << "La suma es: " << suma << std::endl;
        std::cout << "La resta es: " << resta << std::endl;
        std::cout << "La multiplicación es: " << multiplicacion << std::endl;
        std::cout << "La división es: " << division << std::endl;
    } else {
        // Paso 7: Mostrar mensaje de error por si el usuario ingresa cero, se le informará que dividir por cero no es posible a la vez se le da la indicacion de que escriba otro numero diferente de cero
        std::cout << "No es posible dividir por cero,Introduce un segundo número diferente de cero." << std::endl;
    }

    return 0; // Fin del programa con retorno de valor 0, indicando éxito
}
