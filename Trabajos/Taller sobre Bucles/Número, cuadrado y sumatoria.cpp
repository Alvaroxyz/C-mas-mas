// Generar los números de 1 a 100, imprimir el número, su cuadrado y calcular su sumatoria.

#include<iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int i, j=0, s=0; 
	long long e;  
	cout<<"LISTA"<< endl; 
	
	for(i=1; i<=100; i=i+1)
	{
		e=i*i; 
		s=s+i; 

		cout<<"Número: "<< i << "	Cuadrado: "<< e << "	Sumatoria: "<< s << endl; 
	}
	system("pause");
}
