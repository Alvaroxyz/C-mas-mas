//Calcular el factorial de los números del 1 al 20, imprimir el número con su correspondiente factorial y además la sumatoria de factoriales 

#include<iostream>
#include <math.h>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL, ""); 
	cout<<"Lista de números con su factorial y la sumatoria de sus factoriales: "<< endl; 
	int i, f, s; 
	
	for(i=1; i<=20; i=i+1)
	{
		f=f*i; 
		s=s+f;
		
		
		
		
		cout <<"Número: "<< i<< "	Factorial: "<< f << " Sumatoria de los factoriales: "<< s<< endl;
		
		
	}
	
	system("pause"); 
}
