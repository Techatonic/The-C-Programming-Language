#include <stdio.h>

double convert(int);

int main(){

    float fahr, celsius;
    int lower, upper, step;

    lower = -100;
    upper = 200;
    step = 20;

    celsius = lower;

    printf("Conversion between Celsius and Fahrenheit\n");

    while(celsius <= upper){
        fahr =  convert(celsius);
        printf("%6.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }

}

double convert(int celsius){
    return celsius*(9.0/5.0) + 32.0;
}