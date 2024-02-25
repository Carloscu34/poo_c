#include <iostream>
using namespace std;

class Persona{
	// atributos de personas: nombres, apellidos, direccion, telefono.
	
	protected : string nombres, apellidos,direccion, fecha_nacimiento;
	int telefono;
	
	// metodos
	Persona (){
	}
	Persona(string nom,string ape,string dir, int tel, string fecha_nac){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fecha_nac;
	}
		// metodos CRUD = crear, leer, actualizar, borrar
	void crear();
	void leer();
	void actualizar();
	void borrar();
		
	
};
