//Generar los términos de la serie de fibonacci que sean menores que 1000

#include<iostream>

using namespace std;

int main()
{
	int i, a=0, b=1, c;
	cout<<"Lista de los números de Fibonacci menores o iguales a 1000: "<< endl; 
	
	cout<<0<<endl; 
	cout<<1<<endl; 
	
	for(i=1; i<=98; i=i+1)
	{
		c=a+b;
		if(c<=1000)
		{
		cout<<c<<endl; 
		a=b;
		b=c;	
		}
	 } 
	 
	 system("pause");
	
	
	
}
