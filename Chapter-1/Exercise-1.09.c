#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int c;
    int previousChar;

    previousChar = 'A';

    while ((c = getchar()) != EOF){
        if(c != ' ' || previousChar != ' '){
            putchar(c);
            previousChar = c;
        }
    }

}
