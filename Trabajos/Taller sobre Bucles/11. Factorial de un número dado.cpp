//11.Pedir un número entero e imprimir su correspondiente factorial

#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL, ""); 
	int n, i; 
	long long f=1; 
	cout<<"Digite un número entero positivo: "<< endl;
	cin>> n; 
	

	for(i=1;i<=n;i=i+1)
	{
		f=f*i;
	}
	
	cout<<"El factorial del número que digitó es: "<<f<< endl; 
	
	system("pause");
	
}

