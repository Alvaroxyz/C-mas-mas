//Llenar una matriz cuadrada y hallar e imprimir la suma de la diagonal principal, diagonal
//secundaria, triangular superior e inferior


#include<iostream>
#include<stdio.h>
#include <locale.h>

using namespace std; 

int main(){
	
	setlocale(LC_ALL,"");
	
	float dp, ti, ts, ds; 
		
	int n, i , j; 
		
	cout<<"Digite el tamaño de su matriz: "<<endl; 
	cin>> n; 
	
	float m [n] [n]; 
	
	for(int j=1; j<=n; j++)
	{
		for(int l=1;l<=n;l++)
		{
			cout<<"Ingrese el valor de la entrada ["<<j <<"]["<<l <<"]"<<endl; 
			cin>> m[j][l]; 
		}
	}
	
	
	for(int b=1; b<=n; b++)
	{
		
		for(int h=1; h<=n; h++)
		{
			cout<<m[b][h]<<" ";	
		}
	cout<< endl; 
	}
	
	int k=n; 
	
	for(int a=1; a<=n; a++)
	{
		for(int a=1; a<=n; a++)
		{
			if (i<=j)
			{
				ts+=m[i][j];
			}
			if(i>=j)
			{
				ti+=m[i][j];
			}
		}
			
		dp+=m[i][i];
		ds+=m[i][k];
		k--; 
	}
	
	
	cout<< "La suma de los valores de la diagonal principal es: "<< dp << endl; 
	cout<< "La suma de los valores de la diagonal secundaria es: "<< ds << endl; 
	cout<< "La suma de los valores de la matriz triangular superior es: "<< ts << endl; 
	cout<< "La suma de los valores de la matriz triangular inferior es: "<< ti << endl; 

	
	return 0; 

}
