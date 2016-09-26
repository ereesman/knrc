#include <stdio.h>

#define TRUE  1
#define FALSE 0
int printedspace;
int c;
int count;
int x;
int y;
int z;
int a[25];

void getWordCountsByLength()
{
  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != ' ' && c != '\t') {
      count++;
    } else if (count > 0) {
      a[count]++;

      count = 0;
    }
  }  
}

void draw(int counts[])
{
  int mostFrequentWordCount = 0;
  int currentWordCount = 0;
  // determine height of grid to draw
  int i;
  int x;
  for (i = 0;
       i < 24;
       i++)
    {
      currentWordCount = counts[i];
      if (currentWordCount > mostFrequentWordCount)
	{
	  // we have a new most frequent count
	  mostFrequentWordCount = currentWordCount;
	}
    }
  // draw the histogram from top to bottom, left to right
  for (i = mostFrequentWordCount;
       i > 0;
       i--)
    {
      for (x = 1;
	   x < 25;
	   x++)
	{
	  if (counts[x] >= i)
	    {
	      printf("*");
	    } else
	    {
	      printf(" ");
	    }
	}
      printf("\n");
    }
}

int main()
{
  getWordCountsByLength();
  draw(a);
}

