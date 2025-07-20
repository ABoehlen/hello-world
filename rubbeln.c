/* rubbeln.c
   Wahrscheinlichkeitsberechnung der COOP Rubbellose
   19.07.2025, v0.1
   Grundlage: Bartsch: Mathematische Formeln, 1967, S. 462
*/
#include <stdio.h>
#define TITEL "Anzahl Rubbeln: Wahrscheinlichkeit"

float wahr(float g, float m) {
  return g/m;
}

void flamme(int fla, int rub, int tot, char * blank) {
  for (rub = 0; rub < 3; rub++) {
    printf("%d%s%.2f\n", rub, blank, wahr(fla, tot));
    --fla;
    --tot;
  }
}

void flamme_m(int fla, int tot) {
  printf("\nWahrscheinlichkeit 2 Flammen: %.2f\n",
    wahr(fla, tot) * wahr(fla - 1, tot - 1)
  );
  printf("\nWahrscheinlichkeit 3 Flammen: %.2f\n\n",
    wahr(fla, tot) * wahr(fla-1, tot-1) * wahr(fla-2, tot-2)
  );
}

void regen(int reg, int rub, int tot, char * blank) {
  for (rub = 0; rub < 3; rub++) {
    printf("%d%s%.2f\n", rub, blank, wahr(reg, tot));
    --tot;
  }
}

int main() {
  int fla = 3;
  int reg = 1;
  int tot = 4;
  int rub;
  char * blank = "               ";

  printf(TITEL " Flamme\n");
  flamme(fla, rub, tot, blank);

  printf(TITEL " Regen\n");
  regen(reg, rub, tot, blank);

  flamme_m(fla, tot);

  return 0;
}
