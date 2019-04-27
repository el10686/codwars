double find_average(double* array, int length) {
  // Your code here
  double sum = 0;
  for(int i = 0; i < length; i++)
    sum += array[i];
  return sum / length;
}
