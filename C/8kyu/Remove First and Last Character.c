char* remove_char(char* dst, const char* src)
{
    /* your solution should return the string even if you use dst */
    //sprintf(dst ,"%s", src);
    //dst++;
    strcpy(dst, src + 1);
    dst[strlen(dst) - 1] = '\0';
    //printf("%s", dst);
    return dst;
}
