#include<iostream>

using namespace std;

int main()
{
	int N, i, a;
	int p=0;
	int m=0;
	int t=0;
	cout<<"Digite la cantidad de n�meros que quiere evaluar";
	cin>>N; 
	
	for(i=1; i<=N; i=i+1)
	{
		cout<<"digite un n�mero entero"<<endl; 
		cin >> a;
		if(a%2==0)
		p=p+1;
		else 
		m=m+1;
		if(a%15==0)
		cout<< a<<" es m�ltiplo de 3 y 5"<< endl;
	}
	
	cout<< "la cantidad de n�meros pares que usted digit� es "<< p<< endl;
	cout<< "la cantidad de n�meros impares que usted digit� es "<< m<< endl; 
		
	system("pause");
}
