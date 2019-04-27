#include <stddef.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum)
{
  *positivesCount = *negativesSum = 0;
  for(int i = 0; i < count; i++)
  {
  // Please store the positives count in the memory, pointed to
  // by the positivesCount parameter.
    if(values[i] > 0)
      (*positivesCount)++;
  // Please store the negatives sum in the memory, pointed to
  // by the negativesSum parameter.
    else if(values[i] < 0)
      (*negativesSum) += values[i];
  }
  
  }
