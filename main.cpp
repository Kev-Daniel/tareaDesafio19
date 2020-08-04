#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main()
{
    string nombre;
    string apellido;
    int edad;
    char r;
    ofstream archivoprueba;
    string nombrearchivo;
    cout << "INGRESE EL NOMBRE DEL ARCHIVO: ";
    getline(cin, nombrearchivo);
    archivoprueba.open(nombrearchivo.c_str(), ios::app);
    cout << "\tIngrese el nombre: ";
    getline(cin, nombre, '\n');
    cout << "\tIngrese el apellido: ";
    getline(cin, apellido, '\n');
    cout << "\tIngrese la edad: ";
    cin >> edad;
    archivoprueba << nombre << " " << apellido << " " << edad << "\n";
    cout << "** DATOS PERSONALES ****\n";
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "EDAD: " << edad << endl;
    return 0;
}