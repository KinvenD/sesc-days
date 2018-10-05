#include <stdio.h>
#include <math.h>

int main() {
  int z = 0; 
  int a = 0;
  int b = 0;
  scanf("%d", &z);
  while(z>356){
    z-=356;
    a++;
  }
  while(z>7){
    z-=7;
    b++;
  }
  printf("years: %d\nweeks: %d\ndays: %d", a,b,z);
  return 0;
}
