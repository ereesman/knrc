#include <stdio.h>


int c, count, x, y;
int a[100];

int main() {

  for (x = 0; x <= 100; x++) {
    a[x] = 0;
  }
  
  while ((c = getchar()) != EOF) {
    
    if (c != '\n' && c != ' ' && c != '\t') {
      count++;
    } else if (count > 0) {
      a[count]++;
      count = 0;
    }
  }

  for (y = 0; y <= 99; y++) {
    if (a[y] != 0) {
      printf("%d: %d\n", y, a[y]);
    }
  }
}
