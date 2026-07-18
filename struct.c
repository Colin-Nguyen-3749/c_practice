#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

void set_price(struct car *c, float new_price) {

    // We can't use car.price because we're currenly using a 
    // pointer to the car struct, so we have to dereference it
    // This -> is a nice way of doing that
    c->price = new_price;
}

int main(void) {
    struct car saturn = {.speed=175, .name="Saturn 5L/2"};

    set_price(&saturn, 799.99);

    printf("Price: %f\n", saturn.price);
}