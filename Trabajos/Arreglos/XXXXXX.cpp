


case 3: 
{

	
	int g; 
	
	

	
	float vector[l], aux[l];
	
	
	
	
	cout<<"Elija el grupo del que quiere saber el mejor estudiante"<< endl; 
	cin>> g; 
	
 
	
	for(int i=0; i<=l-1    ; i++    )
	{
		vector[i]=m[i][g]; 
		
	}
	
	
	
	
	for(int i=0; i<l-1; i++)
	 {
	 	for(int j=0; j<l-1;j++)
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
