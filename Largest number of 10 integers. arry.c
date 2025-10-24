#include <stdio.h>
int main()
{
    int ir[10],max;
    for(int i=0;i<10;i++){
        scanf("%d",&ir[i]);
    }
    max=ir[0];
    for(int i=1;i<10;i++){
        if(ir[i]>max)
            {max=ir[i];}
    }
    printf("the largest number is %d",max);
}
