//Pedir por teclado un n�mero y determinar si es perfecto (Si la sumatoria de sus divisores es igual al n�mero ejemplo 6 cuyos divisores son 1 2 3).

#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL, "");
	int n,i,c=0  ;
	cout<<"Digite un n�mero natural. "<< endl; 
	cin>> n; 
	
	for(i=1; i<=n;i=i+1)
	{
		if(n%i==0)
			c=c+i;
	}

	
	if(c==2*n)
	cout<<"El n�mero es perfecto. "<< endl; 
	else
	cout<<"El n�mero NO es perfecto. "<< endl; 
	
	
	system("pause"); 
	
	
}
