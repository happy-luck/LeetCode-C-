#include <stdio.h>
#include <string.h>

char * sortString(char * s){
    int num[26];
    // char res[strlen[s]];
    int i, j;
    int len = strlen(s);
    // printf("%s ",s);
    memset(num, 0, sizeof(int)*26);
    for(i = 0; i < len; i++){
        num[s[i]-'a']++;
    }
    i = 0;
    while(i < len){
        for(j = 0; j < 26; j++){
            if(num[j] > 0){
                printf("%c ",(char)('a'+j));
                s[i] = (char)('a'+j);
                num[j]--;
                i++;
            }
        }
        for(j = 25; j >= 0; j--){
            if(num[j] > 0){
                s[i] = (char)('a'+j);
                num[j]--;
                i++;
            }
        }
    }
    return s;
}

int main(){
    char s[] = "aaaabbbbcccc";
    sortString(s);
}