int* nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth) {
  // your code
  int *ret = malloc(2 * sizeof(int));
  
  int i = 0;
  double old = startPriceOld;
  double new = startPriceNew;
  int savings = 0;
  double loss = percentLossByMonth;
  while (1) {
    double available = old + savings;
    if (available >= new) {
      ret[0] = i;
      ret[1] = round(available - new);
      return ret;
    }
    old *= (100.0 - loss) / 100.0;
    new *= (100.0 - loss) / 100.0;
    savings += savingperMonth;
    if (i++ % 2 == 0) loss += 0.5;
  }
}
