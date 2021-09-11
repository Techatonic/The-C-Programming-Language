#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int c;

    c = getchar();

    while(c != EOF){
        c = getchar();
        printf("%d\n", c!=EOF);
    }

}
