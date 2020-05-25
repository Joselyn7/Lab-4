#include <iostream>
#include <string.h>
using namespace std;
class Persona
{
	private:
		string nombre;
		string apellido;
		int edad;
	public:
		Persona(){
//			nombre="o";
//			apellido="o";
//			edad=0;
		}
		Persona(string nombre1,string apellido1,int edad1);
		Persona(Persona &o);
		void mostrar();
};
Persona::Persona(string nombre1,string apellido1,int edad1){
	nombre=nombre1;
	apellido=apellido1;
	edad=edad1;
}
Persona::Persona(Persona &o)
{
	nombre=o.nombre;
	apellido=o.apellido;
	edad=o.edad;
}
void Persona::mostrar()
{
	cout<<endl;
	cout<<"Nombre:"<<nombre<<endl;
	cout<<"Apellido:"<<apellido<<endl;
	cout<<"Edad:"<<edad<<endl;
}
