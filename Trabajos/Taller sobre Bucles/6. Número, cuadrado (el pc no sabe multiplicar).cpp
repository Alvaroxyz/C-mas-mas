//Generar los n�meros del 1 al 100 imprimir el n�mero, su cuadrado teniendo en cuenta que el computador no sabe multiplicar.

#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL,"");
	int i, c=0; 
	for(i=1; i<= 100; i=i+1)
	{
		c=c+i+i-1;
		cout<<"N�mero: "<<i <<"	Cuadrado: "<< c<< endl; 	
	}
	
	system("pause"); 
}
