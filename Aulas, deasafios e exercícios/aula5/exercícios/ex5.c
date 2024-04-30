#include <stdio.h> 

int main () {

int contador = 1;
int fatorial = 5;

while (fatorial > 0){
 contador *= fatorial;
 fatorial--;
}
printf("%d", contador);

return 0;      
}  








