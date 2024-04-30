
#include <stdio.h> 

int main () {

int somar = 0;
int contador = 1;

while (contador <= 100){
if (contador % 2 == 0){
somar = somar + contador; 
}
 contador++;
}
printf("%d", somar);
return 0;      
  
}  
