#include <stdio.h>

/**
 * main - imprime l'alphabet en minuscules.
 * Return: Always 0 (Success)
 */
int main () {
   char ch;

   for(ch = 'a' ; ch <= 'z' ; ch++) {
      putchar(ch);
   }
   
   return(0);
}
