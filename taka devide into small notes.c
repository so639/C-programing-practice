#include <stdio.h>
int main()
{
    int i,x,y,z;
    scanf("%d",&i);
    x=i/100;
    y=(i-(100*x))/50;
    z=(i-((100*x)+(y*50)))/20;
    printf("%d\n",x);
        printf("%d\n",y);
        printf("%d\n",z);

}
