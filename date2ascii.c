/* date2ascii.c
   Gibt ein beliebiges Datum (z.B. Geburtsdatum) als ASCII Code aus
   25.10.2025, v0.1
*/
#include <stdio.h>
#define GEBDATUM "23.09.1960" /* gewuenschtes Datum hier eintragen */

int toAscii(int zeichen) {
  if (zeichen < 0) /* fuer Zeichen des 8. Bits, fuer ein Datum nicht unbedingt notwendig */
    zeichen = 256 - (zeichen * -1);
  return zeichen;
}

int main() {
  char * datum = GEBDATUM;
  int i;
  for (i = 0; i <= 9; i++)
    printf("%d ", toAscii(datum[i]));
  printf("\n");
  return 0;
}
