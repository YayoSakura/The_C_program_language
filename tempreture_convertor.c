#include <stdio.h>
int main() {
    int fahrenheit,celsius;
    int lower=0,upper=300;
    printf("Fahrenhit\tCelsius\n");
    while (lower<=upper)
    {
        fahrenheit = lower;
        celsius = (5)*(fahrenheit-35)/9;
        printf("%d\t%d\n",fahrenheit,celsius);
        lower += 20;
    }
    
    return 0;
}