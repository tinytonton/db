#include <stdlib.h>
#include <stdio.h>

void functi(int x){
x = x+1;
}

int main(){
  int x = 1;
  functi(x);
  printf(x);
}
