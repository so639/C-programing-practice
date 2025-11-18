#include<stdio.h>
//global structure
struct person
{int age;
float sallery;

};
int main()
{ struct person bijoy, joy;//person dtatype ak call kora(jar modha age ar sallery ase
  bijoy.age=21;
  bijoy.sallery=20000.25;//avabe variable gula declare kora hoi
  printf("age= %d\n and sallery= %.2f",bijoy.age, bijoy.sallery);
  getch();
}
