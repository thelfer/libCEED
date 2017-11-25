#include <feme.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  Feme feme;
  FemeBasis b;
  int i, dim = 2, P1d = 3, Q1d = 4, len = (int)(pow((double)(Q1d), dim) + 0.4);
  FemeScalar u[len], v[len];

  FemeInit("/cpu/self", &feme);
  for (i = 0; i < len; i++) {
    u[i] = 1.0;
  }
  FemeBasisCreateTensorH1Lagrange(feme, dim, P1d, Q1d, FEME_GAUSS_LOBATTO, &b);
  FemeBasisApply(b, FEME_NOTRANSPOSE, FEME_EVAL_INTERP, u, v);
  for (i = 0; i < len; i++) {
    printf("%f\n", v[i]);
  }
  FemeBasisDestroy(&b);
  FemeDestroy(&feme);
  return 0;
}