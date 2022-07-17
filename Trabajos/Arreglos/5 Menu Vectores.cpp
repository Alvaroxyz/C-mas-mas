#include<iostream>
#include<stdio.h>
#include<locale.h>

using namespace std;

int main()


{
	setlocale(LC_ALL, "");
	
	int opcion; 
	int aux, m, M, k;
	
	cout<<"¿De qué tamaño quiere el vector?: "<< endl;
	cin>>k;
	
	int vector [k];  
	
		for(int h=0; h<k; h++)
	{
		cout<<"Digite un valor ["<< h<< "]:";
		cin>> vector[h];
	}
	
	do
	{
	
	cout<<"MENU"<< endl;
	cout<<"Elija una de las opciones: "<<endl;
	cout<<"1) Ordenar el vector en forma ascendente. "<<endl;
	cout<<"2) Ordenar el vector en forma descendente. "<<endl;
	cout<<"3) Modificar. "<<endl;
	cout<<"4) Eliminar."<<endl;
	cout<<"5) Mostrar. "<<endl;
	cout<<"6) Salir. "<<endl;
	cin>> opcion; 
	
	switch(opcion)
{
		
    case 1: 
    { 
	 for(int i=0; i<k-1; i++)
	 {
	 	for(int j=0; j<k-1;j++)
	 	{
	 		if(vector[j] > vector[j+1])
	 		{
	 			aux=vector[j+1];
	 			vector[j+1]=vector[j];
	 			vector[j]=aux;
			 }
		 }
	 }
	 for(int i=0; i<k; i++)
	 {
	 	cout<<"\t"<< vector[i];
	 }
	}
    break;
    case 2: 
    {
	 for(int i=0; i<k; i++)
	 {
	 	for(int j=0; j<k-1;j++)
	 	{
	 		if(vector[j] < vector[j+1])
	 		{
	 			aux=vector[j+1];
	 			vector[j+1]=vector[j];
	 			vector[j]=aux;
			 }
		 }
	 }
	 for(int i=0; i<k; i++)
	 {
	 	cout<<"\t"<< vector[i];
	 }
	}
    break;
    case 3:
    {
    	cout<<"Qué valor del vector desea modificar?: "<<endl; 
    	cin>>m;
    	cout<<"Cuál valor desea poner en su lugar?: "<<endl; 
    	cin>>M;
    	vector[m]=M;
	}
	break;
	case 4:
    {
    	cout<<"Qué valor del vector desea eliminar?: "<<endl; 
    	cin>>m;
    	vector[m]=0;
	}
	break;
	case 5:
    {
    	cout<<"Los valores del vector son: "<<endl; 
    	for(int h=0; h<k; h++)
		{
			cout<<"["<< h<< "]:"<< vector[h]<<endl;
		}
	}
	break;
    default: cout<< "Elija una de las dos opciones. "; 
    break;
    
}
 
	} while(opcion!=6);

return 0;

}
