#include<stdio.h>

void par_o_impar(int temp); //prototipo de funcion

void main(){

   int a, b, c;
   int suma = 0, temp;
   
   printf("\n[1]:  ");
   scanf("%d",&a);
   
   printf("\n[2]:  ");
   scanf("%d",&b);
  
   printf("\n[3]:  ");
   scanf("%d",&c);
  
   suma = a + b  + c; // suma de variables
   printf("\nLa suma es = %d",suma);  
   par_o_impar(suma);



}
 
// funcion que determina  si un numero es par o impar
void par_o_impar(int temp){
  
 if ((temp%2) == 1)
      printf("\nNumero es Impar");
   else
     printf("\nNumero es Par ");
return;
}



  
