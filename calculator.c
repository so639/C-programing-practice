
#include<stdio.h>
int main()
{
    double x,y;
    char oper;
    printf("enter an operator(+-*/)=");
    scanf("%c",&oper);
    printf("Enter the number=");
    scanf("%lf",&x);
scanf("%lf",&y);
    switch(oper)
    {
  case'+':
  {

  printf("%lf+%lf=%lf",x,y,x+y);
    break;

   }
    case'-':
    {printf("%lf-%lf=%lf",x,y,x-y);
    break;}
    case'*':
    {printf("%lf*%lf=%lf",x,y,x*y);
    break;}
    case'/':
    {printf("%lf/%lf=%lf",x,y,x/y);
    break;}

    default:
        printf("Not a valid operator" );



    }
}
