#include <iostream>
#include <regex>
#include <string>

void validarCadena(const std::string& cadena) {
    // Definición de las expresiones regulares
    std::regex digito("[0-9]");
    std::regex letra("[a-zA-Z]");
    std::regex palabra("[a-zA-Z]+");
    std::regex numeroEntero("[0-9]+");
    std::regex numeroReal("[0-9]+\\.[0-9]+");
    std::regex identificador("[a-zA-Z][a-zA-Z0-9]*");
    std::regex operador("(=|\\+|\\*|/|%)");

    // Comprobación de cada tipo de entrada
    if (std::regex_match(cadena, digito)) {
        std::cout << "La cadena es un digito." << std::endl;
    } else if (std::regex_match(cadena, letra)) {
        std::cout << "La cadena es una letra." << std::endl;
    } else if (std::regex_match(cadena, palabra)) {
        std::cout << "La cadena es una palabra." << std::endl;
    } else if (std::regex_match(cadena, numeroEntero)) {
        std::cout << "La cadena es un numero entero." << std::endl;
    } else if (std::regex_match(cadena, numeroReal)) {
        std::cout << "La cadena es un numero real." << std::endl;
    } else if (std::regex_match(cadena, identificador)) {
        std::cout << "La cadena es un identificador." << std::endl;
    } else if (std::regex_match(cadena, operador)) {
        std::cout << "La cadena es un operador." << std::endl;
    } else {
        std::cout << "Error: La cadena no corresponde a ninguna de las expresiones regulares." << std::endl;
    }
}

int main() {
    std::string input;
    std::cout << "Introduce una cadena para validar: ";
    std::cin >> input;

    validarCadena(input);

    return 0;
}
