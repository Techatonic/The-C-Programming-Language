#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int c, i, maxSizeWord, currLength;
    maxSizeWord = 20;
    currLength = 0;
    int frequencies[maxSizeWord];

    for (i = 0; i < maxSizeWord; i++){
        frequencies[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if(c == '\n' || c == '\t' || c == ' '){
            if(currLength == 0)
                continue;
            frequencies[currLength - 1]++;
            currLength = 0;
        } else{
            currLength++;
        }
    }

    for (i = 0; i < maxSizeWord; i++){
        printf("%d    ", i+1);
        int j;
        for(j = 0; j<frequencies[i]; j++){
            printf("=");
        }
        printf("\n");
    }

}
