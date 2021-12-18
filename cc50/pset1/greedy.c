#include <stdio.h>
#include <math.h>

int main(void) {
    float cents = 0;
    int count = 0;
    int amount_left = 0;

    printf("Oi. Quanto troco você deve?");
    scanf("%f", &cents);

    amount_left = (int)round(cents * 100);

    while (amount_left >= 25) {
        count++;
        amount_left -= 25;
    }
    while (amount_left >= 10) {
        count++;
        amount_left -= 10;
    }
    while (amount_left >= 5) {
        count++;
        amount_left -= 5;
    }
    while (amount_left >= 1) {
        count = count + 1;
        amount_left -= 1;
    }
    printf("\n", count);
}
