#include <stdio.h>
int main()
{
int a,b,sum,sub,mul,div,mod;
printf("enter 2 integer value");
scanf("%d%d",&a,&b);
sum =a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("sum=%d\n",sum);
printf("sub=%d\n",sub);
printf("mul=%d\n",mul);

if(b!=0){
printf("div=%d\n",div);
printf("modulas=%d\n",mod);
}
else{printf("division and modulus is not posible");}
return 0;

}
