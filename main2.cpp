include "Empleados.cpp"
#include <iostream>
using namespace std;

main(){

	string nombres,apellidos,direccion,puesto;

	int telefono,sueldo,codigo_empleado;

    cout<<"Ingrese Nombres: ";

	cin>>nombres;

	cout<<"Ingrese Apellidos: ";

	cin>>apellidos;

	cout<<"Ingrese Direccion: ";

	cin>>direccion;

	cout<<"Ingrese Telefono: ";

	cin>>telefono;

	cout<<"Ingrese sueldo: ";

	cin>>sueldo;

	
	cout<<"Ingrese codigo del empleado: ";

	cin>>codigo_empleado;
	
	cout<<"Ingrese puesto: ";

	cin>>puesto;

	Empleados obj = Empleados (nombres,apellidos,direccion,telefono,sueldo,codigo_empleado,puesto);

	obj.mostrar();

}
