char * freqAlphabets(char * s) {
    char *str = malloc(sizeof(char) * strlen(s));
    int count = 0;

    for(int i = 0; i < strlen(s); ) {
        if(i + 2 < strlen(s) && s[i + 2] == '#') {
            str[count] = ((s[i] - '0') * 10 + s[i + 1] - '1') + 'a';
            count++;
            i = i + 3;
        }else{
            str[count] = (s[i] - '1') + 'a';
            count++;
            i++;
        }
    }
    str[count] =  '\0';
    return str;
}