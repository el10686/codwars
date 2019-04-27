int get_num(long a) {
  //processing
  int nDigits = floor(log10(abs(a))) + 1;
  int sum = 0;
  for(int i = 0; i < nDigits; i++)
  {
    int b = a % 10;
    a = a / 10;
    if(b == 0 || b == 6 || b == 9)
      sum++;
    else if(b == 8)
      sum += 2;
  }
  return sum;
}
