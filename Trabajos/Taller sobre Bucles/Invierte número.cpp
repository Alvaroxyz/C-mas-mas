//toma un numero y le invierte las cifras
#include<iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); 
	long long n, a, b=0, c, d, e, f=0, i, j;
	cout << "Digite un número: "<< endl; 
	cin>> n; 
	a=n;
	j=n;

	do
	{
		a=a/10;
		b=b+1;
	}
	while (a>=10);
	
	cout<< "Su número tiene "<< b+1<< " cifras"<< endl; 
	
	for(i=b; i>=0; i=i-1)
	{
		c=j/(pow(10,i));
		e=c*(pow(10,b-i));
		f=f+e;
		j=j-c*(pow(10,i));
	}
	
	cout<< "Además su número invertido es: "<<f<< endl; 
	
	
	system("pause");
	
	
}
