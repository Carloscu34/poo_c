#include "Persona.cpp"
#include <iostream>
using namespace std;
class Estudiante : Persona{
	//atributo de estudiante = carnet
	private : string carnet;
	public : 
	Estudiante (){
	}
	Estudiante (string nom, string ape, string dir, int tel, string fecha_nac, string ca) 
	: Persona(nom,ape,dir,tel,fecha_nac){
		carnet= ca;
	}
	// metodo
    void leer(){
    	cout<<carnet<<endl;
    	cout<<nombres<<endl;
    	cout<<apellidos<<endl;
    	cout<<direccion<<endl;
    	cout<<telefono<<endl;
    	cout<<fecha_nacimiento<<endl;
    	
    	
	}
};

