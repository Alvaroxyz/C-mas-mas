#include<iostream>

using namespace std;

int main()
{
	long long i;
	int n;
	long long  f=1;
	cout <<"Digite un n�mero natural" ; 
	cin>> n; 
	
	for(i=1; i<=n; i=i+1)
	{
		f=f*i;
	}
	cout << "El factorial de su n�mero es "<< f<< endl; 
	
	system("PAUSE"); 
}
