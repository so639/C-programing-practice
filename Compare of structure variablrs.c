#include <stdio.h>

struct person {
    int age;
    int number;
};

int main() {
    struct person joy, boy, roy;

    joy.age = 5;
    boy.age = 8;

    joy.number = 12345;
    boy.number = 1234;

    // boy = roy;   // ❌ This is wrong because 'roy' has no value yet.
    // Removing it or initializing roy first:
    roy=boy;

    printf("JOY age = %d\nJOY number = %d\n", joy.age, joy.number);

    printf("BOY age = %d\nBOY number = %d\n", boy.age, boy.number);

    printf("ROY age = %d\nROY number = %d\n", roy.age, roy.number);

    return 0;
}
