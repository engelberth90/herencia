#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleados : Persona  {
	//atribiutos 
	private :int codigo_empleado;
	private : int sueldo;
	private :string puesto; 
	
	//costructor
     public :
	Empleados(){
	}
Empleados(string nom,string ape,string dir,int tel,int suel,int coem,string pues) : Persona(nom,ape,dir,tel){ 
sueldo = suel;
codigo_empleado=coem;
puesto= pues;
 }
void setsueldo(int suel){sueldo = suel;}
void setcodigo_Empleado(int coem){codigo_empleado = coem;}
void setpuesto(string pues){puesto = pues;}

void setNombres(string nom){nombres= nom;}
void setApellidos(string ape){apellidos= ape;}
void setDireccion(string dir){direccion= dir;}
void setTelefono(int tel){telefono= tel;}
//get mostrar 

int getSueldo(){return sueldo;}
int getCodigo_empleado(){return codigo_empleado;}
string getPuesto(){return puesto;}
string getNombres(){return nombres;}
string getApellidos(){return apellidos;}
string getDireccion(){return direccion ;}
void mostrar(){

	cout<<"______________________"<<endl;

	cout<<sueldo<<","<<codigo_empleado<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
}
};


