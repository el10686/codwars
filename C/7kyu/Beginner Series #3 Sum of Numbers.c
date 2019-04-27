int get_sum(int a , int b) {
    // Good luck
    int low = a;
    int high = b;
    int sum = 0;
    
    if(b < a)
    {
      low = b;
      high = a;
    }
    
    if(low == high) 
      return low;
      
    for(int i = low; i <= high; i++)
      sum += i; 
      
    return sum;  
}
