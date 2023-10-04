#include <stdio.h> 

int main () {

int somar = 0;
int contador = 1;

while (contador <= 10){
if (contador % 2 == 0){
 somar += contador; // somar = somar + contador
}
 contador++;
}
printf("%d", somar);
return 0;      
}  








