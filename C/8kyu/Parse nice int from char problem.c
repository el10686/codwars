int getAge(const char *inputString)
{   
    int ret;
    
    ret = (int) inputString[0] - 48;
    printf("%i\n", ret);
    // return correct age (int). Happy coding :)
    return ret;
}
