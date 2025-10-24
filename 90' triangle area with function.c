#include<stdio.h>
float triangle(float i,float j);
//if function is under main ..then you have to declare the function on the top.

int main()
{
    float height ,width ,area;
    scanf("%f%f",&height,&width);
    area=triangle(height,width);
    printf("%.2f",area);

}
float triangle(float i,float j)
{
    return(.5*i*j);
}
