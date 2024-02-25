#include "Estudiante.cpp"
#include <iostream>
using namespace std;

main(){
	//instancia de un objeto
	//Estudiante obj (objeto: se escribe el nombre de la clase en minuscula)
	string varc, varn, varape, vardir, 
	cout<<"Ingrese Nombre: ";
	cin>>varn;
	
	string varn;
	cout<<"Ingrese apellido: ";
	cin>>varn;
	
	string varn;
	cout<<"Ingrese direccion: ";
	cin>>varn;
	
	string varn;
	cout<<"Ingrese telefono: ";
	cin>>varn;
	
	string varn;
	cout<<"Ingrese fecha de nacimiento: ";
	cin>>varn;
	
	Estudiante estudiante = Estudiante(varc,varn);
	estudiante.leer();
}
