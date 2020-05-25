#include <iostream>
#include <string.h>
#include "Persona.h"
using namespace std;

class ArregloDePersonas
{
	private:
		Persona *ptr;
		Persona *aux;
		int tamano;
	public:
		ArregloDePersonas();
		ArregloDePersonas(const Persona Personas[],const int tam);	
		ArregloDePersonas(const ArregloDePersonas &o);
		void redimensionar(int n);
		void push_back(const Persona &p);
		void insert(const int posicion,const Persona &p);
		void remove(const int pos);
		const int get_size()const;
		void mostrarA();
		void clear();
		~ArregloDePersonas();
			
};
ArregloDePersonas::ArregloDePersonas(const Persona Personas[],const int tam)
{
	tamano=tam;
	ptr=new Persona[tam];
	for(int i=0;i<tam;i++){
		ptr[i]=Personas[i];
	}
}
ArregloDePersonas::ArregloDePersonas(const ArregloDePersonas &o)
{
	tamano=o.tamano;
	for(int i=0;i<tamano;i++){
		ptr[i]=o.ptr[i];
	}	
}
void ArregloDePersonas::redimensionar(int n)
{
	int n2=tamano;
	tamano=n;
	aux= new Persona[tamano];
    for(int i=0;i<n2; i++)
    {
        aux[i]=ptr[i];
    }
    delete[] ptr;
    ptr=aux;
}
void ArregloDePersonas::push_back(const Persona &p)
{
	int ta=tamano+1;
	redimensionar(ta);
	ptr[ta-1]=p;
	
}
void ArregloDePersonas::insert(const int posicion,const Persona &p)
{
	const int pp=posicion-1;
	redimensionar(tamano+1);
	for(int i=tamano-1;i>0;i--){
		ptr[i]=ptr[i-1];
		if(pp==i){
			ptr[i]=p;
			break;
		}
	}
}
void ArregloDePersonas::remove(const int pos)
{
	bool pas=false;
	for(int i=0;i<tamano-1;i++){
		if(i==pos-1){	
			pas=true;
		}
		if(pas==true){
			ptr[i]=ptr[i+1];
		}
	}
	tamano--;	
}
const int ArregloDePersonas::get_size()const
{
	return tamano;
}
void ArregloDePersonas::mostrarA()
{
	for(int i=0;i<tamano;i++)
	{
		ptr[i].mostrar();
	}
}
void ArregloDePersonas::clear()
{
	int n=get_size();
	for(int i=0;i<n;i++){
		tamano--;	
	}
}
ArregloDePersonas::~ArregloDePersonas()
{
	delete[] ptr;
}
int main()
{
	Persona objeto("jo","qu",10);
	Persona objeto2("hol","gg",19);
	Persona objeto3("jofg","qfgu",100);
	Persona objeto4("kjd","bb",30);
	Persona Personas[2]={objeto,objeto2};
	ArregloDePersonas objeto1(Personas,2);
	cout<<"-----Lista------"<<endl;objeto1.mostrarA();
	cout<<"----TAMANO DEL ARREGLO:"<<objeto1.get_size();
	cout<<endl;
	objeto1.push_back(objeto3);	
	cout<<"-----Lista------"<<endl;objeto1.mostrarA();
	objeto1.insert(3,objeto4);
	cout<<"-----Lista------"<<endl;objeto1.mostrarA();
	objeto1.remove(3);
	cout<<"-----Lista------"<<endl;objeto1.mostrarA();
	objeto1.clear();
	cout<<"-----Lista------"<<endl;objeto1.mostrarA();
	return 0;
}
