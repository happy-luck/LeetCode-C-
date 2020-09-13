bool isUnique(char* astr){
    char* hash[26] = {0};
    char* p = astr;
    while(*p != '\0'){
        hash[*p - 'a'] += 1;
        if(hash[*p - 'a'] > 1){
            return false;
        }
        p++;
    }
    return true;
}