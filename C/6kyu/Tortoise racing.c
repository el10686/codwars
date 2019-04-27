int* race(int v1, int v2, int g) {
    // your code
    int *res;
    res = malloc(sizeof(int) * 3);
    
    if(v1 >= v2) {
      res[0] = res[1] = res[2] = -1;
      return res;
    }
    
    res[0] = g/(v2-v1);
    res[1] = (g % (v2-v1)) * 60 / (v2-v1);
    res[2] = (((g % (v2-v1)) * 60) % (v2-v1)) * 60 / (v2-v1);
    
    return res;
    
}
