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
    printf ("enter sallery of joy");
    scanf("%d",&joy.number);
     printf ("enter sallery of boy");
    scanf("%d",&boy.number);
      printf ("enter sallery of roy");
     scanf("%d",&roy.number);
      printf("JOY age=%d \n JOY number= %d \nBOY age=%d \n BOY number= %d\n ROY age=%d \n ROY number= %d \n"
             ,joy.age,joy.number,boy.age,boy.number,roy.age,roy.number);
}

