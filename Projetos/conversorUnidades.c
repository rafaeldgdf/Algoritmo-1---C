#include <stdio.h>

int main() {
 float temperaturaC, conversorTemperaturaF, conversorTemperaturaK;
 printf("Digite a temperatura em celsius: ");
 scanf("%f", &temperaturaC);
 conversorTemperaturaF = (temperaturaC * 1.8) + 32;
 conversorTemperaturaK = temperaturaC + 273;

 float m, km, hm, dam, dm, cm, mm; 
 printf("Digite a unidade de medida em metros: ");
 scanf("%f", &m);
 km = m / 1000; 
 hm = m / 100; 
 dam = m / 10; 
 cm = m * 100; 
 mm = m * 1000; 
 dm = cm / 10; 
 printf("Em quilomêtros: %.2f km \n", km);
 printf("Em hectômetro: %.2f hm \n", hm);
 printf("Em decâmetro: %.2f dam \n", dam);
 printf("Em centímetro: %.2f cm \n", cm);
 printf("Em milímetro: %.2f mm \n", mm); 
 printf("Em decímetro: %.2f dm \n", dm); 


 //printf("Temperatura em Fahrenheit: %.4f ºF \n", conversorTemperaturaF);
//printf("Temperatura em Kelvin: %.4f ºK \n", conversorTemperaturaK);
  return 0;
}


