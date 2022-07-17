//15.Generar los últimos 20 números impares menores que 75.

#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL, "");
	
	int	i,p		; 
	
	cout<<"Los últimos 20 números impares menores que 75 son: "<< endl; 
	
	
	for(i=0; i<=75; i=i+1)
	{
		p=2*i+1; 
	
	if(p<=75 & 35<p)
	cout<<p<< endl; 
	}
	
	system("pause");
	
	
	
	}

