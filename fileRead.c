#include <stdio.h>

int main(){

  int temp;

  // Dateizeiger erstellen
  FILE *fp;

  // Datei oeffnen
  fp = fopen("test.txt", "r");

  if (fp == NULL) {
    printf("Datei konnte NICHT geoeffnet werden.\n");

  }

  else {
    printf("Datei konnte geoeffnet werden.\n");

    while ((temp = fgetc(fp)) != EOF)
      printf("%c ", temp);

    // Datei schliessen
    fclose(fp);
  }

  return 0;
}
