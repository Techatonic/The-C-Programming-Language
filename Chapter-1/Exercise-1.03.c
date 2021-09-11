#include <stdio.h>

int main(){

    float fahr, celsius;
    int lower, upper, step;

    lower = -100;
    upper = 200;
    step = 20;

    fahr = lower;

    printf("Conversion between Fahrenheit and Celsius\n");

    while(fahr <= upper){
        celsius =  (5.0/9.0)*(fahr-32.0);
        printf("%6.0f %6.0f\n", fahr, celsius);
        fahr = fahr + step;
    }

}
