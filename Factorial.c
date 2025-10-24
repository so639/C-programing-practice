#include<stdio.h>
int main()
{
    int i,f=1;
    scanf("%d",&i);
    while(i>1){
        f*=i;
        i--;
    }
    printf("%d",f);
}
