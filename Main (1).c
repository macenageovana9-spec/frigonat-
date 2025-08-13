#include <stdio.h>
int main()
{

 int termo;
 int contador;
 int auxiliar1;
 int auxiliar2;
 
 for(contador =1; contador <=10; contador ++) {
   if(contador<= 2) {
     termo = 1;
   } else {
     termo=auxiliar1 + auxiliar2;
     auxiliar1 = auxiliar2;
     auxiliar2 = termo;
   }
   printf("%d", termo);
  }
   
}  
 
 

