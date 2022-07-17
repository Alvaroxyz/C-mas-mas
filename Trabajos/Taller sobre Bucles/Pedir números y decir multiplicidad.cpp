#include<iostream>

using namespace std;

int main()
{
	int N, i, a;
	int p=0;
	int m=0;
	int t=0;
	cout<<"Digite la cantidad de números que quiere evaluar";
	cin>>N; 
	
	for(i=1; i<=N; i=i+1)
	{
		cout<<"digite un número entero"<<endl; 
		cin >> a;
		if(a%2==0)
		p=p+1;
		else 
		m=m+1;
		if(a%15==0)
		cout<< a<<" es múltiplo de 3 y 5"<< endl;
	}
	
	cout<< "la cantidad de números pares que usted digitó es "<< p<< endl;
	cout<< "la cantidad de números impares que usted digitó es "<< m<< endl; 
		
	system("pause");
}
