#include <stdio.h>
struct person{
    char  name;
int age;
int number;

};
int main()

{
    struct person joy={ 'B',5,200 };// inside variablre vlue declare,,,

      printf("name= %c \nJOY age=%d \n JOY number= %d \n"
             ,joy.name,joy.age,joy.number);
}
