#include<iostream>
#include<locale.h>

using namespace std; 

int main()
{
	setlocale(LC_ALL,"");
	int n, a, b, c=0, d, s; 
	cout << "Digite un n�mero"<< endl; 
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
	
	cout<< "n�mero: "<< n<< endl; 
	cout << "Suma de d�gitos: "<< s << endl; 
	
	system("pause");
	
}
