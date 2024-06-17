#include <stdio.h>
#include <stdio.h>

int Calculo (float VGas, float VEta);

int main ()
{
	printf(###### "EcoCAR"\n ######) ;
    
    float precoGasolina, precoEtanol;
    printf("Qual o preço da gasolina \n?");
    scanf(%f, &precoGasolina);
    
    printf("Qual o preço da Etanol \n?");
    scanf(%f, &precoEtanol);
	
	int resultado = calculo (precoGasolina, precoEtanol);
	if (resultado == 0 )
	{
     printf ("Compensa abastecer com gasolina. \n" );
     
	 		
	}
	
	else if (resultado == 1)
	printf ("compensa abastecer com Etanol. \n")   
 }
 
 else 
 {
  printf ("São equivalentes, tanto faz. \n" )
 }
	
	system ("pause"); 
	return 0;
	
}

int Calculo (float VGas, float VEta)
{
   //Preco da gasolina * 0.7 = preco maximo do alcool
   
   if ((vGas * 0.70)< Eta)
   {
   	// Compensa abastecer com Gasolina 
   return 0;
   }
   else if (VGas * 0.70) > vEta)
   // Compensa abastecer com Etanol 
   return 1;
}
 else 
 //Valores sao equivalentes
 return 2;
      
 
}
