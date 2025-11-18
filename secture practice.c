#include <stdio.h>
struct person{
int age;
int number;

};
int main()

{
    struct person joy, boy, roy;
    joy.age=5;
    boy.age=8;
    roy.age=10;
    joy.number=12345;
     boy.number=1234;
      roy.number=123;
      printf("JOY age=%d \n JOY number= %d \nBOY age=%d \n BOY number= %d\n ROY age=%d \n ROY number= %d \n"
             ,joy.age,joy.number,boy.age,boy.number,roy.age,roy.number);
}
