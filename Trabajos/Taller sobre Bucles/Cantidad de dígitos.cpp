#include<iostream>


using namespace std;

int main()
{
	long long n, a, b=0, c, d, e, f=0, i, j;
	cout << "Digite un n�mero: "<< endl; 
	cin>> n; 
	a=n;
	j=n;

	do
	{
		a=a/10;
		b=b+1;
	}
	while (a>=10);
	
	cout<< "Su n�mero tiene "<< b+1<< " d�gitos."<< endl; 
	
	
}
