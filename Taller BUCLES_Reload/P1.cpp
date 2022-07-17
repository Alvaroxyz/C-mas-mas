//taller de bucles
//obtener los primeros 100 primeros términos de la serie de Fibonacci

#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std; 

int main()
{
	long long i, a=0, b=1, c; //toco ponerle long long para que salgan más números, aún así no salen todos
	
	cout<<"El número de Fibonacci de la posición: "<<1<< " es "<<0<<endl; 
	cout<<"El número de Fibonacci de la posición: "<<2<< " es "<<1<<endl; 
	
	for(i=1;i<=98; i=i+1)
	{
		c=a+b;
		cout<<"El número de Fibonacci de la posición: "<<i+2<< " es "<<c<<endl; 
		a=b;
		b=c;
	 } 
	 
	 system("pause");
	
	
}
