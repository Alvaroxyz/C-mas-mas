//Pedir por teclado N-números enteros e imprimir para cada uno la suma de sus dígitos.

#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL, "");
	int i,m			; 
	int n, a, b, c=0, d;
	
	
	cout<<"Escribe la cantidad de números a los que le quieres hallar la suma de sus dígitos."<< endl; 
	cin>> m; 
	
	
	for(i=1; i<=m; i=i+1)
	{
		cout<<"Digita uno de los números: "<< endl; 
		cin >> n; 
		d=n;
	
	do
	{
		a=d/10;
		b=d-a*10;
		d=a;
		c=c+b;
	}
	while(a>=10);
	
	cout<<"La suma de sus dígitos es: "<<c+b<< endl; 


	}
	
	system("pause"); 
	
	
}
