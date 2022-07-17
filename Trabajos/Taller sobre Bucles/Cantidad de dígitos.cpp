#include<iostream>


using namespace std;

int main()
{
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
	
	cout<< "Su número tiene "<< b+1<< " dígitos."<< endl; 
	
	
}
