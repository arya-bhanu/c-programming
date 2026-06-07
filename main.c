#include <stdio.h>

int main() {
    // 1.5.1 File Copying
    /* */
    int c = getchar();

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
    int c;
    long lc = 0;
    while ((c  = getchar()) != EOF) ++lc;
    printf("%ld\n", lc);
    */
}
