#include <stdio.h>

/*
Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.
 */

float a[26]; // We are 'cheating' and only counting a - z, lower case!

void getCharacterCounts() {
  int c;
  while ((c = getchar()) != EOF) {
      if (c == 'a') {
	a[0]++;
      }
      if (c == 'b') {
	a[1]++;
      }
      if (c == 'c') {
	a[2]++;
      }
      if (c == 'd') {
	a[3]++;
      }
      if (c == 'e') {
	a[4]++;	
      }
      if (c == 'f') {
	a[5]++;	
      }
      if (c == 'g') {
	a[6]++;	
      }
      if (c == 'h') {
	a[7]++;	
      }
      if (c == 'i') {
	a[8]++;	
      }
      if (c == 'j') {
	a[9]++;	
      }
      if (c == 'k') {
	a[10]++;	
      }
      if (c == 'l') {
	a[11]++;	
      }
      if (c == 'm') {
	a[12]++;	
      }
      if (c == 'n') {
	a[13]++;	
      }
      if (c == 'o') {
	a[14]++;	
      }
      if (c == 'p') {
	a[15]++;	
      }
      if (c == 'q') {
	a[16]++;	
      }
      if (c == 'r') {
	a[17]++;	
      }
      if (c == 's') {
	a[18]++;	
      }
      if (c == 't') {
	a[19]++;	
      }
      if (c == 'u') {
	a[20]++;	
      }
      if (c == 'v') {
	a[21]++;	
      }
      if (c == 'w') {
	a[22]++;	
      }
      if (c == 'x') {
	a[23]++;	
      }
      if (c == 'y') {
	a[24]++;	
      }
      if (c == 'z') {
	a[25]++;	
      }      
    }
}

void draw(float counts[]) {
  int totalChars;
  int currentFrequency = 0;
  int highestFrequency = 0;
  int i;
  int x;
  /* for (i = 0; i < 26; i++) { */
  /*   printf("%d", counts[i]); */
  /* } */
  for (i = 0; i < 26; i++) {
    totalChars = counts[i] + totalChars;
  }
  for (i = 0; i < 26; i++) {
    counts[i] = ((counts[i] / totalChars) * 100);
  }
  for (i = 0; i < 25; i++) {
    currentFrequency = counts[i];
    if (currentFrequency > highestFrequency) {
      highestFrequency = currentFrequency;
    }
  }
  for (i = highestFrequency; i > 0; i--) {
    for (x = 0; x < 27; x++) {
      if (counts[x] >= i) {
  	printf("*");
      } else {
  	printf(" ");
      }
    }
    printf("\n");
  }
  printf("abcdefghijklmnopqrstuvwxyz\n");
}

int main() {
  getCharacterCounts();
  draw(a);
}
