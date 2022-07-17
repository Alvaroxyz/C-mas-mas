//12.Pedir por teclado dos números enteros n1 y n2 (n2 es mayor que n1) imprimir el factorial de los números 

//comprendidos entre n1 y n2 incluyéndolos. Ej. 7 y 4, imprime el factorial de 4, 5, 6 y 7.

#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL, "");
	int n1, n2, i  ; 
	long long f=1; 
	
	cout<<"Debe digitar dos números en orden (de menor a mayor), comenzando por el primero: "<< endl; 
	cin>>n1; 
	cout<<"Y el segundo: "<< endl; 
	cin>>n2; 
	
	for(i=n1; i<=n2; i=i+1)
	{
		f=f*i; 
	}
	cout<<"El factorial de los números comprendidos entre "<< n1<<" y " <<n2 <<" es: " << f<< endl; 
	system("pause"); 
	
}

