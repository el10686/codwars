typedef struct _array_minmax_t {
  // TODO
  int min; 
  int max;
} array_minmax_t;

void array_minmax_add(array_minmax_t *array, int number);

array_minmax_t *array_minmax_create(unsigned int length, int *input_array) {
  // TODO
  array_minmax_t *array = malloc(sizeof(array_minmax_t));
  array->min = input_array[0];
  array->max = input_array[0];
  for(int i = 1; i < length; i++) 
    array_minmax_add(array, input_array[i]);
  return array;
}

void array_minmax_add(array_minmax_t *array, int number) {
  // TODO
  if(number < array->min)
    array->min = number;
  if(number > array->max)
    array->max = number;
}

int array_minmax_get_min(array_minmax_t *array) {
  // TODO
  return array->min;
}

int array_minmax_get_max(array_minmax_t *array) {
  // TODO
  return array->max;
}

void array_minmax_destroy(array_minmax_t *array) {
  // TODO
  free(array);
}
