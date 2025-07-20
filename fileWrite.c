#include <stdio.h>

int main() {

  // Dateizeiger erstellen
  FILE *fp;

  // Datei oeffnen
  fp = fopen("test.txt", "w+");

  // fuer formatierte Ausgabe, identisch printf
  fprintf(fp, "This is testing for fprintf...\n");

  // schreibt einen String
  fputs("This is testing for fputs...\n", fp);

  // Datei schliessen
  fclose(fp);

  return 0;
}
