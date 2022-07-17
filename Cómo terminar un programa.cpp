#include<iostream>
// #include<conio.h> en teoría esta libreria se necesita para el cin.get();
//#include<stdlib.h> en teoria esta libreria se necesita para el system pause

using namespace std; 

int main()
{
	cout<<"Hola mundo"<< endl; 
	//system("pause");
	
	cin.get();
	return 0; //este siempre debe ir, porque le da valor a la funcion principal (main). cin. get, system pause, encambio son para pausar la ejecución del programa. 
}
