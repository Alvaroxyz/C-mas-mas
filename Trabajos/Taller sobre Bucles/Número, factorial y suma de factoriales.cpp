//Calcular el factorial de los n�meros del 1 al 20, imprimir el n�mero con su correspondiente factorial y adem�s la sumatoria de factoriales 

#include<iostream>
#include <math.h>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL, ""); 
	cout<<"Lista de n�meros con su factorial y la sumatoria de sus factoriales: "<< endl; 
	int i, f, s; 
	
	for(i=1; i<=20; i=i+1)
	{
		f=f*i; 
		s=s+f;
		
		
		
		
		cout <<"N�mero: "<< i<< "	Factorial: "<< f << " Sumatoria de los factoriales: "<< s<< endl;
		
		
	}
	
	system("pause"); 
}
