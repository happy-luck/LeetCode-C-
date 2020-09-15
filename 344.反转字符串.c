void reverseString(char* s, int sSize){
    char tmp;
    int i;
    for(i = 0; i < sSize / 2; i++) {
        tmp = s[i];
        s[i] = s[sSize - 1 - i];
        s[sSize - i - 1] = tmp;
    }
    return s;
}