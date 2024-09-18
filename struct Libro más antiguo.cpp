#include <iostream>
using namespace std;

//Crea una estructura llamada Libro que tenga los siguientes campos: titulo(string), autor(string), anio(int). Luego, declara un arreglo de 3 libros.
//Escribe un programa que permita al usuario ingresar los datos de los libros y luego muestre la informacion del libro más antiguo.

struct Libro {
    string titulo;
    string autor;
    int anio;
};

int main() {
    Libro libros[3];

	cout << "*** Ingresar datos de 3 libros *** " << endl;
	cout << " " << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el titulo del libro " << i + 1 << ": ";
        cin.ignore(); 
        getline(cin, libros[i].titulo);
        cout << "Ingrese el autor del libro " << i + 1 << ": ";
        getline(cin, libros[i].autor);
        cout << "Ingrese el anio de publicacion del libro " << i + 1 << ": ";
        cin >> libros[i].anio;
    }


    int indiceMasAntiguo = 0;
    for (int i = 1; i < 3; i++) {
        if (libros[i].anio < libros[indiceMasAntiguo].anio) {
            indiceMasAntiguo = i;
        }
    }

    cout << "\nEl libro mas antiguo es:\n";
    cout << "Titulo: " << libros[indiceMasAntiguo].titulo << "\n";
    cout << "Autor: " << libros[indiceMasAntiguo].autor << "\n";
    cout << "Anio: " << libros[indiceMasAntiguo].anio << "\n";

    return 0;
}
