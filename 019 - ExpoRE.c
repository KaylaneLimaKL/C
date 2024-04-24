#include <stdio.h>

int expo(int m, int n){
  if(n == 0){
    return 1;
  }
  else if (n == 1){
    return m;
  }
  else if (n>0){
      return m * expo(m, n-1);
    }
  else if(n<0){
    return 0;
  }
}


int main() {
    int m = 5, n = 2;

    printf("%d elevado a %d é: %d\n", m, n, expo(m, n));

    return 0;
}
