//11.Pedir un n�mero entero e imprimir su correspondiente factorial

#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL, ""); 
	int n, i; 
	long long f=1; 
	cout<<"Digite un n�mero entero positivo: "<< endl;
	cin>> n; 
	

	for(i=1;i<=n;i=i+1)
	{
		f=f*i;
	}
	
	cout<<"El factorial del n�mero que digit� es: "<<f<< endl; 
	
	system("pause");
	
}

