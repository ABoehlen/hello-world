#!/usr/bin/awk -f
#
BEGIN {
  txt = "Hello World!";
  printf("\n\t%s\n", rep(12, "*"));
  printf("\t%s\n", txt);
  printf("\t%s\n\n", rep(12, "*"));
}

function rep(n, c,    t) {
  while (n-- > 0)
    t = t c;
  return t;
}