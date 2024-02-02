#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  float a, b, c;
  
  // a2 = b2 + c2
  
  system("clear"); // se estiver usando windows troque clear por cls
  printf("\n\t#################################\n");
  printf("\t######|Teorema de Pitágoras|#####\n");
  printf("\t######|Created by Guilherme|#####\n");
  printf("\t#################################\n\n");
  
  printf("\tValor do cateto b: ");
  scanf("%f", &b);
  fflush(stdin);
  
  printf("\tValor do cateto c: ");
  scanf("%f", &c);
  fflush(stdin);
  
  a = (b * b) + (c * c);
  a = sqrt(a);
  
  printf("\n\t+------+------+------+\n");
  printf("\t| Hipotenusa: %.2f\n", a);
  printf("\t+------+------+------+\n\n");
  return 0;
}
