const char* elevator(int left, int right, int call) {
    // code on! :)
    if(abs(call - left) < abs(call - right))
      return "left";
    return "right";
}
