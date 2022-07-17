#include<iostream>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL,"");
	int n, a, b, c=0, d, s; 
	cout << "Digite un número"<< endl; 
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
	
	s=c+d; 
	
	cout<< "número: "<< n<< endl; 
	cout << "Suma de dígitos: "<< s << endl; 
	
	system("pause");
	
}
