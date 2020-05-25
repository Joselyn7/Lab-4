#include <iostream>
#include <string.h>
using namespace std;

class Persona
{
	public:
		string nombre;
		string apellido;
		int edad;
		Persona(){
			nombre='o';
			apellido='o';
			edad=0;
		}
		Persona(string nombre1,string apellido1,int edad1){
			nombre=nombre1;
			apellido=apellido1;
			edad=edad1;
		}
		string getNombre()const;
		string getApellido()const;
		int getEdad()const;
		void setNombre(const string);
		void setApellido(const string);
		void setEdad(const int);
		void print();
};
string Persona::getNombre()const {
	return nombre;
}
string Persona::getApellido()const {
	return apellido;
}
int Persona::getEdad()const {
	return edad;
}
void Persona::setNombre(const string nombre1){
	nombre=nombre1;
}
void Persona::setApellido(const string apellido1){
	apellido=apellido1;
}
void Persona::setEdad(const int edad1){
	edad=edad1;
}
void Persona::print(){
	cout<<"Nombre:"<<nombre<<endl;
	cout<<"Apellido:"<<apellido<<endl;
	cout<<"Edad:"<<edad<<endl;
}
int main(){
	Persona objeto;
	//constructores
	cout<<objeto.nombre<<endl;
	Persona objeto1("fati","gutierrez",20);
	cout<<objeto1.nombre<<endl;
	cout<<objeto1.apellido<<endl;
	cout<<objeto1.edad<<endl;
	//funciones (get)
	cout<<objeto.getNombre()<<endl;
	cout<<objeto.getApellido()<<endl;
	cout<<objeto.getEdad()<<endl;
	//Funciones (set)
	objeto.setNombre("Almida");
	objeto.setApellido("Florez");
	objeto.setEdad(12);
	//Funcion (print)
	objeto.print();
}
