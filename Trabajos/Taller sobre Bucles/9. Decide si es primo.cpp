//Pedir por teclado un n�mero entero e imprimir si es primo (Divisible por el mismo y la unidad)

#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL, "");
	int n, i=1, c=0; 
	
	cout<<"Digite su n�mero: "<< endl;
	cin>>n; 
	
	do
	{
		if(n%i==0)
			c=c+1;
			i=i+1;
	}
	while(i<=n);
	
	if(c==2)
	cout<<"El n�mero es primo. "<< endl; 
	else
	cout<<"El n�mero NO es primo"<< endl; 
	
	
	system("pause"); 
	
}
