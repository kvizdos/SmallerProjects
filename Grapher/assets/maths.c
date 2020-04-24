#include <emscripten.h>
#include <math.h>
#include <stdio.h>

EMSCRIPTEN_KEEPALIVE
double generateParabolaPoint(double n, double a, double h, double k) {
  return a * ((n - h) * (n - h)) + k;
}

EMSCRIPTEN_KEEPALIVE
double generatePolynomialPoint(double n, double v5, double v4, double v3, double v2, double v1, double vPlus) {
  return (v5 * pow(n, 5)) + (v4 * pow(n, 4)) + (v3 * pow(n, 3)) + (v2 * pow(n, 2)) + (v1 * pow(n, 1)) + vPlus;
}