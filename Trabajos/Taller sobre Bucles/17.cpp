//17. Pedir la cedula, nombre y salario de empleados hasta cuando el usuario lo desee. Si el empleado gana
//por encima de 1 millón se le descuenta el 1.5% de su salario. Imprimir para cada empleado su nuevo
//salario o un mensaje en caso de no tener descuento. Imprimir el total de dinero recogido por los
//descuentos y el porcentaje de empleados a los cuales se les realizó.


#include<iostream>
#include <math.h>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL, ""); 
	int	ce, no, sa	; 
	
	cout<<"Digite su número de cédula, su nombre y su salario: ">> endl; 
	
	cin>>ce, no, sa		; 
	
	
	if(sa>1000000)
	{
		nu=sa*0.985;
		cout<<"Su nuevo salario es: "<< nu<< endl;
	}
	else
	cout<<"Su salario no tiene descuento, sigue siendo el mismo.  "<< nu<< endl; 
	 
	
	
	
	
	
}

