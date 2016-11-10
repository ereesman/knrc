#include <stdio.h>

/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 */

int count;
int a[25]; // magic number, we assume 25 character words to be the max

void getWordCountsByLength() {
  int c;
  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != ' ' && c != '\t') {
      count++;
    } else if (count > 0) {
      a[count]++;
      count = 0;
    }
  }
}

void draw(int counts[]) {
  int mostFrequentWordCount = 0;
  int currentWordCount = 0;
  // determine height of grid to draw
  int i;
  int x;
  for (i = 0; i < 24; i++) {
    currentWordCount = counts[i];
    if (currentWordCount > mostFrequentWordCount) {
      // we have a new most frequent count
      mostFrequentWordCount = currentWordCount;
    }
  }
  // draw the histogram from top to bottom, left to right
  for (i = mostFrequentWordCount; i > 0; i--) {
    for (x = 1; x < 25; x++) {
      if (counts[x] >= i) {
	printf("*");
      } else {
	printf(" ");
      }
    }
    printf("\n");
  }
}

int main() {
  getWordCountsByLength();
  draw(a);
}

