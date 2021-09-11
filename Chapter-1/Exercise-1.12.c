#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[]){

    int c, nw, state;

    nw = 0;

    state = OUT;
    while((c = getchar()) != EOF){
        if(c == '\n' || c == ' ' || c == '\t'){
            printf("\n");
        } else{
            printf("%c", c);
        }
    }


}
