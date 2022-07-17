#include<iostream>
#include<stdio.h>

using namespace std;

int main()


{
	int vector [10];
	int opcion; 
	int aux, m, M;
	
	cout<<"Debe digitar un vector con 10 valores: "<< endl; 
	
	for(int h=0; h<10; h++)
	{
		cout<<"Digite un valor ["<< h<< "]:";
		cin>> vector[h];
	}
		
	
	cout<<"MENU"<< endl;
	cout<<"Elija una de las opciones: "<<endl; 
	cout<<"1) Ordenar el vector en forma ascendente. "<<endl;
	cout<<"2) Ordenar el vector en forma descendente. "<<endl;
	cout<<"3) Modificar. "<<endl;
	cout<<"4) Eliminar."<<endl;
	cout<<"5) Mostrar. "<<endl;
	cout<<"6) Ordenar el vector en forma descendente. "<<endl;
	cin>> opcion; 
	
	switch(opcion)
{
    case 1: 
    { 
	 for(int i=0; i<9; i++)
	 {
	 	for(int j=0; j<9;j++)
	 	{
	 		if(vector[j] > vector[j+1])
	 		{
	 			aux=vector[j+1];
	 			vector[j+1]=vector[j];
	 			vector[j]=aux;
			 }
		 }
	 }
	 for(int i=0; i<10; i++)
	 {
	 	cout<<"\t"<< vector[i];
	 }
	}
    break;
    case 2: 
    {
	 for(int i=0; i<10; i++)
	 {
	 	for(int j=0; j<9;j++)
	 	{
	 		if(vector[j] < vector[j+1])
	 		{
	 			aux=vector[j+1];
	 			vector[j+1]=vector[j];
	 			vector[j]=aux;
			 }
		 }
	 }
	 for(int i=0; i<10; i++)
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
	case 4:
    {
    	cout<<"Qué valor del vector desea eliminar?: "<<endl; 
    	cin>>m;
    	vector[m]=0;
	}
	case 5:
    {
    	cout<<"Los valores del vector son: "<<endl; 
    	for(int h=0; h<10; h++)
		{
			cout<<"["<< h<< "]:"<< vector[h]<<endl;
		}
	}
	
    default: cout<< "Elija una de las dos opciones. "; 
}

return 0; 

}
