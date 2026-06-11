#include <stdio.h>

int main() {
  // 1.5.1 File Copying
  /* int c = getchar(); */

  // will only printed the first char into console
  /* putchar(c);  */

  // need to use 'while; to print all input
  /*  while (c != EOF) {
      putchar(c);
      c = getchar();
  } */

  // more simpler form, use assignment as expressions
  /*
  int c;
  while ((c = getchar()) != EOF)
  {
     putchar(c);
  }

  printf("EOF: %d", EOF);
  */

  // 1.5.2 Character Counting
  /*
  -- using while loop
  int c;
  long lc = 0;
  while ((c  = getchar()) != EOF) ++lc;
  printf("%ld\n", lc);
  */
  /*
  -- using for loop
  int c;
  double nc;
  for (nc = 0; (c = getchar()) != EOF; ++nc)
  {
      printf("count: %.2f\n", nc);
      printf("char: %c\n", c);
  }
  printf("final count: %.2f\n", nc);
  */

  // 1.5.3 Line Counting
  /*
  char c;
  int nl = 0;
  while ((c = getchar()) != EOF) {
      // not error but will cause undefined behaviour
      // printf("char: %c; int: %d\n", c);
      printf("char: %c; int: %d\n", c, c);
      if (c == 10) {
          ++nl;
      }
  }
  printf("%d\n", nl);
  */

  // Exercise 1-8
  /*
      int nBlanks = 0;
  int nTabs = 0;
  int nNewLines = 0;
  char c;
  while ((c = getchar()) != EOF) {
      if (c == '\n') {
          ++nNewLines;
      }

      if (c == '\t') {
          ++nTabs;
      }

      if (c == ' ') {
          ++nBlanks;
      }
  }
  printf("newlines: %d\n", nNewLines);
  printf("tabs: %d\n", nTabs);
  printf("blanks: %d\n", nBlanks);
  */

  // Exercise 1-9
  /*
      char c;
      int contains_blank = 0;
      while((c = getchar()) != EOF){
          if (c != ' ') {
              contains_blank = 0;
          }
          if (contains_blank == 1 && c == ' ') {
              continue;
          }
          if (c == ' ') {
              contains_blank = 1;
          }
          putchar(c);
      }
   */

  // Exercise 1-10.
  char c;
  while ((c = getchar()) != EOF) {
    if (c == '\b') {
      putchar('\\');
      putchar('b');
      continue;
    }
    if (c == '\t') {
      putchar('\\');
      putchar('t');
      continue;
    }
    if (c == '\\') {
      putchar('\\');
      putchar('\\');
      continue;
    }
    putchar(c);
  }
}
