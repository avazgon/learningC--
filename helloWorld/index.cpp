#include <iostream>

// Para mostrar la salida
using std::cout;

// Para leer la entrada del usuario
using std::cin;

// Para leer linea completa de texto, es decir, con espacios
using std::getline;

// tipo de dato cadena de texto
using std::string;

int main(int argc, char const *argv[])
{
    /* code */
    cout << "Could u say something?" << std::endl;

    string someText;

    getline(cin, someText);

    cout << "User say: " << someText << std::endl;
    return 0;
}
