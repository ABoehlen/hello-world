#include <stdio.h>

int main() {
  printf("Size of the basic data types\n");
  printf("****************************\n\n");
  printf("%-12s%2zu Bit\n", "char:", sizeof(char)*8);
  printf("%-12s%2zu Bit\n", "short:", sizeof(short)*8);
  printf("%-12s%2zu Bit\n", "int:", sizeof(int)*8);
  printf("%-12s%2zu Bit\n", "long:", sizeof(long)*8);
  printf("%-12s%2zu Bit\n", "long long:", sizeof(long long)*8);
  printf("%-12s%2zu Bit\n", "float:", sizeof(float)*8);
  printf("%-12s%2zu Bit\n", "double:", sizeof(double)*8);
  return 0;
}
