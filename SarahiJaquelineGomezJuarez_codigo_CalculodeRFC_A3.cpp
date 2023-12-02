/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>// Se incluye la librería estándar de entrada/salida
#include <cctype> // Para la función isalpha esta función verifica si un carácter es una letra alfabética (ya sea mayúscula o minúscula)

using namespace std;

int main() {// Inicio de la función principal
    // Declaración de variables y Código de la función principal ...
    string nombre = "";
    string apellido_paterno = "";
    string apellido_materno = "";
    string vocal = "";
    string dia = "";
    string mes = "";
    string anio = "";
    string RFC = "";
//Mensajes Iniciales:
    cout << "Cálculo de RFC" << endl; //Mensaje de salida y titulo del programa.
    cout << "Utiliza mayúsculas" << endl; //Mensaje de salida y instruccion principal para que el usuario comprenda con claridad como debe ingresar los datos

    // Estructuras repetitivas (do-while loops)
    // Validación de entrada para el primer nombre
    do {
        cout << "Introduce tu primer nombre: ";// Solicitud de entrada del Primer Nombre (con Validación).
        getline(cin, nombre); // Permitir espacios en el nombre y muestra los datos ingresados por el usuario

        // Verificar si todos los caracteres son letras mayúsculas
        if (nombre.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ ") != string::npos) {//Cadenas Constantes:se utiliza para verificar si el nombre ingresado contiene caracteres que no son letras mayúsculas o espacios.
            cout << "Error: Ingresa solo letras mayúsculas en el nombre." << endl; //Salida del mensaje  al usuario si la entrada del dato requerido no cumple con la validacion. 
        } else {// Si cumple con la validacion la estructura continua. 
            // Tomar solo el primer nombre
            size_t espacio = nombre.find_first_of(" ");
            if (espacio != string::npos) {
                nombre = nombre.substr(0, espacio);
            }
            break; // Salir del bucle si la entrada es válida.
        }
    } while (true); // Fin del bucle do-while

    // Validación de entrada para el apellido paterno.
    do {
        cout << "Introduce tu apellido paterno: ";// Solicitud de entrada del apellido paterno  (con Validación)
        cin >> apellido_paterno;// Muestra los datos ingresados por el usuario

        // Verificar si todos los caracteres son letras mayúsculas
        if (apellido_paterno.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos) {//Cadenas Constantes:se utiliza para verificar si el apellido paterno ingresado contiene caracteres que no son letras mayúsculas.
            cout << "Error: Ingresa solo letras mayúsculas en el apellido paterno." << endl; //Salida del mensaje  al usuario si la entrada del dato requerido no cumple con la validacion. 
        } else {// Si cumple con la validacion la estructura continua.
            break; // Salir del bucle si la entrada es válida
        }
    } while (true); // Fin del bucle do-while

    // Validación de entrada para el apellido materno
    do {
        cout << "Introduce tu apellido materno (En caso de no tener, agrega una X mayúscula): ";// Solicitud de entrada del apellido materno o X mayuscula (con Validación)
        cin >> apellido_materno;// Muestra los datos ingresados por el usuario

        // Verificar si todos los caracteres son letras mayúsculas o 'X'
        if (apellido_materno.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZX") != string::npos) {/*Cadenas Constantes:se utiliza para verificar si el apellido paterno ingresado contiene caracteres que no son letras mayúsculas.*/
            cout << "Error: Ingresa solo letras mayúsculas o 'X' en el apellido materno." << endl; //Salida del mensaje  al usuario si la entrada del dato requerido no cumple con la validacion. 
        } else {// Si cumple con la validacion la estructura continua. 
            break; // Salir del bucle si la entrada es válida
        }
    } while (true); // Fin del bucle do-while

    // Validación de entrada para el día
    do {
        cout << "Fecha de nacimiento (solo números) DD/MM/AAAA" << endl;// Salida del mensaje al usuario: que debe ingresar su fecha de nacimiento en formato de día/mes/año, utilizando solo números y dara un salto de linea para continuar el codigo.
        cout << "Día: ";// Solicitud de entrada del Día (con Validación)
        cin >> dia;// Muestra los datos ingresados por el usuario

        // Verificar si la entrada tiene exactamente dos dígitos y es un número entero
        if (dia.size() != 2 || dia.find_first_not_of("0123456789") != string::npos || stoi(dia) < 1 || stoi(dia) > 31) {
            cout << "Error: Ingresa dos números del 01 al 31 en el día." << endl;//Salida del mensaje  al usuario si la entrada del dato requerido no cumple con la validacion. 
        } else {// Si cumple con la validacion la estructura continua. 
            break; // Salir del bucle si la entrada es válida
        }
    } while (true); // Fin del bucle do-while

    // Validación de entrada para el mes
    do {
        cout << "Mes: ";// Solicitud de entrada del Mes (con Validación)
        cin >> mes;// Muestra los datos ingresados por el usuario

        // Verificar si la entrada tiene exactamente dos dígitos y es un número entero
        if (mes.size() != 2 || mes.find_first_not_of("0123456789") != string::npos || stoi(mes) < 1 || stoi(mes) > 12) {
            cout << "Error: Ingresa dos números del 01 al 12 en el mes." << endl;//Salida del mensaje  al usuario si la entrada del dato requerido no cumple con la validacion. 
        } else {// Si cumple con la validacion la estructura continua. 
            break; // Salir del bucle si la entrada es válida
        }
    } while (true); // Fin del bucle do-while

    // Validación de entrada para el año
    do {
        cout << "Año: ";// Solicitud de entrada del Año (con Validación)
        cin >> anio;// Muestra los datos ingresados por el usuario

        // Verificar si la entrada es un número entero
        if (anio.find_first_not_of("0123456789") != string::npos) {
            cout << "Error: Ingresa solo números en el año." << endl;//Salida del mensaje  al usuario si la entrada del dato requerido no cumple con la validacion. 
        } else {// Si cumple con la validacion la estructura continua.
            break; // Salir del bucle si la entrada es válida
        }
    } while (true); // Fin del bucle do-while

    // Salidas
    cout << "Tu nombre es: " << nombre << " " << apellido_paterno << " " << apellido_materno << endl;// Muestra los datos ingresados por el usuario
    cout << "Tu fecha de nacimiento es: " << dia << "/" << mes << "/" << anio << endl;// Muestra los datos ingresados por el usuario

    // Estructuras selectivas (if statements)
    // Encontrar la primera vocal en el apellido paterno
    for (int i = 1; i < apellido_paterno.length(); ++i) {
        char letra = apellido_paterno[i];
        if (isalpha(static_cast<unsigned char>(letra))) {
            if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
                vocal += letra;//Inicializacin de la cadena vacia al comienzo del programa y cuando se encuentra la primera vocal en el apellido paterno, se agrega a la cadena 'vocal'.
                break; // Detener el bucle al encontrar la primera vocal
            }
        }
    }

    // Tipo de estructura: Secuencia
// Construcción del RFC:
    RFC = apellido_paterno.substr(0, 1); //Se toma la primera letra del apellido paterno.
    RFC += vocal; // Primera vocal que encontramos en el ciclo - Se agrega la primera vocal encontrada en el apellido paterno.
    RFC += apellido_materno.substr(0, 1); //Se incluye la primera letra del apellido materno.
    RFC += nombre.substr(0, 1); //Inicial del nombre ,es decir, se añade la primera letra del primer nombre.
    RFC += anio.substr(2, 2); //Se incorporan los dos últimos dígitos del año de nacimiento.
// Se incluyen los dígitos del mes y día de nacimiento.
    RFC += mes; // Dígitos para el mes
    RFC += dia; // Dígitos para el día

    // Tipos de sentencias: cout
    // RFC sin homoclave
    cout << "Tu RFC sin homoclave es: " << RFC << endl;//Muestra el mensaje del RFC sin homoclave 

    // Tipos de sentencias: cout
    // RFC con homoclave
    cout << "Tu RFC con homoclave es: " << RFC + "XXX" << endl;/*Muestra el mensaje del RFC con la homoclave,
Constante para la Homoclave: XXX se utiliza como la homoclave constante que se agrega al final del RFC.*/

    return 0;// Fin de la función principal, la ejecución ha finalizado correctamente y salida del programa.
}
