#include <stdio.h>
int main()
{
    int ir[5],sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&ir[i]);
    }

    for(int i=0;i<5;i++){
        sum =sum+ir[i];}

    printf("the sum is %d",sum);
}
