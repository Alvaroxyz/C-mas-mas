//taller de bucles
//obtener los primeros 100 primeros t�rminos de la serie de Fibonacci

#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std; 

int main()
{
	long long i, a=0, b=1, c; //toco ponerle long long para que salgan m�s n�meros, a�n as� no salen todos
	
	cout<<"El n�mero de Fibonacci de la posici�n: "<<1<< " es "<<0<<endl; 
	cout<<"El n�mero de Fibonacci de la posici�n: "<<2<< " es "<<1<<endl; 
	
	for(i=1;i<=98; i=i+1)
	{
		c=a+b;
		cout<<"El n�mero de Fibonacci de la posici�n: "<<i+2<< " es "<<c<<endl; 
		a=b;
		b=c;
	 } 
	 
	 system("pause");
	
	
}
