//14.Pedir N-n�meros enteros e imprimir cuantos son divisibles por la suma de sus d�gitos




#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL, "");
	int i,m			; 
	int n, a, b, c=0, d, k=0, e;
	
	
	cout<<"Escribe la cantidad de n�meros que deseas que sean analizados: "<< endl; 
	cin>> m; 
	
	
	for(i=1; i<=m; i=i+1)
	{
		cout<<"Digita un n�mero: "<< endl; 
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
	
	
	e=c+d; 
	
	if(n%e==0)
	k=k+1;
	

	}
	

	
	cout<<"La cantidad de n�meros que son divisibles por la suma de sus d�gitos es: "  <<k<<endl; 
	

	system("pause"); 
	
	
}




