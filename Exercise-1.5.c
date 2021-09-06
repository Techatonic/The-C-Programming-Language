#include <stdio.h>

int main(){

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Conversion between Celsius and Fahrenheit\n");

    for (celsius = upper; celsius >= lower; celsius -= step){
        fahr =  celsius*(9.0/5.0) + 32.0;
        printf("%6.0f %6.0f\n", celsius, fahr);
    }

}
