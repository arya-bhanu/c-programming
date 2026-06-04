#include <stdio.h>

#define LOWER 0.0
#define UPPER 300.0
#define STEP 20.0

int main()
{
    for (int i = LOWER; i <= UPPER; i += STEP)
    {
        float c = 5.0 / 9.0 * (i - 32);
        printf("Celcius: %3f\tFahrenheit: %3f\n", c, i);
    }
}
