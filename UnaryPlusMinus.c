#include <stdio.h>
#include <stdlib.h>

int main(){

    int money = 25;
    int bill = 15;
    int total = money - -bill;

    printf("%i\n", total);

    int pizzasToEat = 100;
    pizzasToEat++;
    printf("Pizzas to eat: %i\n",pizzasToEat);

    int output = ++pizzasToEat;
    printf("Pizzas to eat: %i\n", output);

    int oldOutput = pizzasToEat++;
    printf("Pizzas to eat: %i\n", oldOutput);

    pizzasToEat = pizzasToEat + 100; //202
    pizzasToEat += 100; //303
    printf("Pizzas to eat: %i\n",pizzasToEat);

    // -= *= /= %= 

    return 0;
}