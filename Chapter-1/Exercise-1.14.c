#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int c, i;
    int frequencies[26];

    for (i = 0; i < 26; i++){
        frequencies[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if(c >= 'a' && c <= 'z'){
            frequencies[c-'a']++;
        } else if(c >= 'A' && c <= 'Z'){
            frequencies[c-'A']++;
        }
    }

    for (i = 0; i < 26; i++){
        printf("%c    ", i+97);
        int j;
        for(j = 0; j<frequencies[i]; j++){
            printf("=");
        }
        printf("\n");
    }

}
