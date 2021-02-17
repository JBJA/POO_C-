// Persona = nombres, pellidos, direccion, telefono, fecha de nacimiento, DPI, etc...
// Cliente = nit, etc...

#include<iostream>
using namespace std;

// clase
class Persona{
	
// atributos protected, private, public	
protected : string nombres, apellidos, direccion;
			int telefono;
// constructor = envia parametros de una clase a otra
protected :
Persona(){
}
Persona(string nom, string ape, string dir, int tel){
	nombres = nom;
	apellidos = ape;
	direccion = dir;
	telefono = tel;
}

// metodos
void mostrar();
};


