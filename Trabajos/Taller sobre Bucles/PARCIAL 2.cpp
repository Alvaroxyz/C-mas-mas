#include<iostream>

using namespace std; 

int main()
{
	int	A,B,C		;
	cout<<"Digite su primer n�mero: "<< endl;
	cin>> A; 
	cout<<"Digite su segundo n�mero: "<< endl;
	cin>> B; 
	cout<<"Digite su tercer n�mero: "<< endl;
	cin>> C; 
	
	if(A>B)
	{
		if(A>C)
		cout<<A<<" es el mayor."<< endl;
		else 
		{
			if(A==C)
			cout<<A<< " y "<<C << " son los mayores."<< endl;
			else
			cout<<C<<" es el mayor."<< endl;
		}	
	}
	else
	{
		if(A==B)
		{
			if(A>C)
			cout<<A<< " y "<<B << " son los mayores."<< endl;
			else 
			{
				if(A==C)
				cout<<A<<", "<<B<< " y "<<C << " son iguales."<< endl;
				else
				cout<<C<<" es el mayor."<< endl;
			}
		}
		else 
		{
			if(B>C)
			cout<<B<<" es el mayor."<< endl;
			else
			{
				if(B==C)
				cout<<B<< " y "<<C << " son los mayores."<< endl;
				else
				cout<<C<<" es el mayor."<< endl;
			}
		}
	}
	
	
	
	
	system("pause"); 
	
	
}
