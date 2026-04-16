#!/usr/bin/awk -f

BEGIN {
  FS = ",";
}

NR > 2 {
  sum = sum + $3;
}

END {
  printf("Size of all repos: %.3f MB\n", sum);
}
